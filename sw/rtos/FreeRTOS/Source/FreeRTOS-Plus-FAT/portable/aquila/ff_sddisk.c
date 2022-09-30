/* Standard includes. */
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>

/* FreeRTOS includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "portmacro.h"

/* FreeRTOS+FAT includes. */
#include "ff_headers.h"
#include "ff_sddisk.h"
#include "ff_sys.h"

#include "sd.h"
#include "spi.h"

static SemaphoreHandle_t xPlusFATMutex;

#define sdSIGNATURE 0x41404342
#define sdHUNDRED_64_BIT		( 100ull )
#define sdBYTES_PER_MB		( 1024ull * 1024ull )
#define sdSECTORS_PER_MB		( sdBYTES_PER_MB / 512ull )
#define sdIOMAN_MEM_SIZE 4096

static int32_t prvFFRead( uint8_t *pucBuffer, uint32_t ulSectorNumber, uint32_t ulSectorCount, FF_Disk_t *pxDisk )
{
int32_t lReturn = 0;
	if( pxDisk != NULL )
	{
		if( pxDisk->ulSignature != sdSIGNATURE )
		{
			/* The disk structure is not valid because it doesn't contain a
			magic number written to the disk when it was created. */
			lReturn = FF_ERR_IOMAN_DRIVER_FATAL_ERROR | FF_ERRFLAG;
		}
		else if( pxDisk->xStatus.bIsInitialised == pdFALSE )
		{
			/* The disk has not been initialised. */
			lReturn = FF_ERR_IOMAN_OUT_OF_BOUNDS_WRITE | FF_ERRFLAG;
		}
		else if( ulSectorNumber >= pxDisk->ulNumberOfSectors )
		{
			/* The start sector is not within the bounds of the disk. */
			lReturn = ( FF_ERR_IOMAN_OUT_OF_BOUNDS_WRITE | FF_ERRFLAG );
		}
		else if( ( pxDisk->ulNumberOfSectors - ulSectorNumber ) < ulSectorCount )
		{
			/* The end sector is not within the bounds of the disk. */
			lReturn = ( FF_ERR_IOMAN_OUT_OF_BOUNDS_WRITE | FF_ERRFLAG );
		}
		else
		{
			sd_copy(pucBuffer, ulSectorNumber, ulSectorCount);
		}
	}
	else
	{
		lReturn = FF_ERR_NULL_POINTER | FF_ERRFLAG;
	}
	return lReturn;
}
/*-----------------------------------------------------------*/

static int32_t prvFFWrite( uint8_t *pucBuffer, uint32_t ulSectorNumber, uint32_t ulSectorCount, FF_Disk_t *pxDisk )
{
int32_t lReturn = 0;
	if( pxDisk != NULL )
	{
		if( pxDisk->ulSignature != sdSIGNATURE )
		{
			/* The disk structure is not valid because it doesn't contain a
			magic number written to the disk when it was created. */
			lReturn = FF_ERR_IOMAN_DRIVER_FATAL_ERROR | FF_ERRFLAG;
		}
		else if( pxDisk->xStatus.bIsInitialised == pdFALSE )
		{
			/* The disk has not been initialised. */
			lReturn = FF_ERR_IOMAN_OUT_OF_BOUNDS_WRITE | FF_ERRFLAG;
		}
		else if( ulSectorNumber >= pxDisk->ulNumberOfSectors )
		{
			/* The start sector is not within the bounds of the disk. */
			lReturn = ( FF_ERR_IOMAN_OUT_OF_BOUNDS_WRITE | FF_ERRFLAG );
		}
		else if( ( pxDisk->ulNumberOfSectors - ulSectorNumber ) < ulSectorCount )
		{
			/* The end sector is not within the bounds of the disk. */
			lReturn = ( FF_ERR_IOMAN_OUT_OF_BOUNDS_WRITE | FF_ERRFLAG );
		}
		else
		{
			sd_write(pucBuffer, ulSectorNumber, ulSectorCount);
		}
	}
	else
	{
		lReturn = FF_ERR_NULL_POINTER | FF_ERRFLAG;
	}
	
	return lReturn;
}
/*-----------------------------------------------------------*/

/* Initialise the SDIO driver and mount an SD card */
FF_Disk_t *FF_SDDiskInit( const char *pcName )
{
FF_Error_t xFFError;
BaseType_t xPartitionNumber = 0;
FF_CreationParameters_t xParameters;
FF_Disk_t *pxDisk;

	pxDisk = (FF_Disk_t *)pvPortMalloc( sizeof( *pxDisk ) );
	if( pxDisk == NULL )
	{
		FF_PRINTF( "FF_SDDiskInit: Malloc failed\n" );
	}
	else
	{
		init_sd();

		/* Initialise the created disk structure. */
		memset( pxDisk, '\0', sizeof( *pxDisk ) );

		pxDisk->ulNumberOfSectors = 7741440; //fixed

		if( xPlusFATMutex == NULL )
		{
			xPlusFATMutex = xSemaphoreCreateRecursiveMutex();
		}
		pxDisk->ulSignature = sdSIGNATURE;

		if( xPlusFATMutex != NULL)
		{
			memset( &xParameters, '\0', sizeof( xParameters ) );
			xParameters.ulMemorySize = sdIOMAN_MEM_SIZE;
			xParameters.ulSectorSize = 512;
			xParameters.fnWriteBlocks = prvFFWrite;
			xParameters.fnReadBlocks = prvFFRead;
			xParameters.pxDisk = pxDisk;

			/* prvFFRead()/prvFFWrite() are not re-entrant and must be protected with
			the use of a semaphore. */
			xParameters.xBlockDeviceIsReentrant = pdFALSE;

			/* The semaphore will be used to protect critical sections in the +FAT driver,
			and also to avoid concurrent calls to prvFFRead()/prvFFWrite() from different tasks. */
			xParameters.pvSemaphore = ( void * ) xPlusFATMutex;

			pxDisk->pxIOManager = FF_CreateIOManger( &xParameters, &xFFError );
			if( pxDisk->pxIOManager == NULL )
			{
				FF_PRINTF( "FF_SDDiskInit: FF_CreateIOManger: %s\n", (const char*)FF_GetErrMessage( xFFError ) );
				FF_SDDiskDelete( pxDisk );
				pxDisk = NULL;
			}
			else
			{
				pxDisk->xStatus.bIsInitialised = pdTRUE;
				pxDisk->xStatus.bPartitionNumber = xPartitionNumber;

				if( FF_SDDiskMount( pxDisk ) == 0 )
				{
					FF_SDDiskDelete( pxDisk );
					pxDisk = NULL;
				}
				else
				{
					if( pcName == NULL )
					{
						pcName = "/";
					}

					FF_FS_Add( pcName, pxDisk );
					FF_PRINTF( "FF_SDDiskInit: Mounted SD-card as root \"%s\"\n", pcName );
					FF_SDDiskShowPartition( pxDisk );
				}
			}
		}
	}

	return pxDisk;
}
/*-----------------------------------------------------------*/

BaseType_t FF_SDDiskFormat( FF_Disk_t *pxDisk, BaseType_t aPart )
{
FF_Error_t xError;
BaseType_t xReturn = 0;

	FF_SDDiskUnmount( pxDisk );
	{
		/* Format the drive */
		xError = FF_Format( pxDisk, aPart, pdFALSE, pdFALSE);  // Try FAT32 with large clusters
		if( FF_isERR( xError ) )
		{
			FF_PRINTF( "FF_SDDiskFormat: %s\n", (const char*)FF_GetErrMessage( xError ) );
			return 0;
		}
		else
		{
			FF_PRINTF( "FF_SDDiskFormat: OK, now remounting\n" );
			pxDisk->xStatus.bPartitionNumber = aPart;
			xError = FF_SDDiskMount( pxDisk );
			FF_PRINTF( "FF_SDDiskFormat: rc %08x\n", ( unsigned )xError );
			if( FF_isERR( xError ) == pdFALSE )
			{
				xReturn = 1;
				FF_SDDiskShowPartition( pxDisk );
			}
		}
	}
	return xReturn;
}
/*-----------------------------------------------------------*/

BaseType_t FF_SDDiskReinit( FF_Disk_t *pxDisk )
{
int iStatus = init_sd(); /* Hard coded index. */

	/*_RB_ parameter not used. */
	( void ) pxDisk;

	FF_PRINTF( "FF_SDDiskReinit: rc %08x\n", ( unsigned )iStatus );
	return iStatus;
}
/*-----------------------------------------------------------*/

BaseType_t FF_SDDiskMount( FF_Disk_t *pxDisk )
{
FF_Error_t xFFError;
BaseType_t xReturn = 1;

	/* Mount the partition */
	xFFError = FF_Mount( pxDisk, pxDisk->xStatus.bPartitionNumber );

	if( FF_isERR( xFFError ) )
	{
		FF_PRINTF( "FF_SDDiskMount: %s\n", (const char*)FF_GetErrMessage( xFFError ) );
		xReturn = 0;
	}
	else
	{
		pxDisk->xStatus.bIsMounted = pdTRUE;
		FF_PRINTF( "****** FreeRTOS+FAT initialized %ld sectors\n", pxDisk->pxIOManager->xPartition.ulTotalSectors );
	}

	return xReturn;
}
/*-----------------------------------------------------------*/

/* Unmount the volume */
BaseType_t FF_SDDiskUnmount( FF_Disk_t *pxDisk )
{
FF_Error_t xFFError;
BaseType_t xReturn = 1;

	if( ( pxDisk != NULL ) && ( pxDisk->xStatus.bIsMounted != pdFALSE ) )
	{
		pxDisk->xStatus.bIsMounted = pdFALSE;
		xFFError = FF_Unmount( pxDisk );
		FF_PRINTF( "FF_SDDiskUnmount: rc %08x\n", ( unsigned )xFFError );
		if( FF_isERR( xFFError ) )
		{
			xReturn = 0;
		}
		else
		{
			FF_PRINTF( "Drive unmounted\n" );
		}
	}

	return xReturn;
}
/*-----------------------------------------------------------*/

/* Get a pointer to IOMAN, which can be used for all FreeRTOS+FAT functions */
FF_IOManager_t *sddisk_ioman( FF_Disk_t *pxDisk )
{
FF_IOManager_t *pxReturn;

	if( ( pxDisk != NULL ) && ( pxDisk->xStatus.bIsInitialised != pdFALSE ) )
	{
		pxReturn = pxDisk->pxIOManager;
	}
	else
	{
		pxReturn = NULL;
	}
	return pxReturn;
}
/*-----------------------------------------------------------*/

/* Release all resources */
BaseType_t FF_SDDiskDelete( FF_Disk_t *pxDisk )
{
	if( pxDisk != NULL )
	{
		pxDisk->ulSignature = 0;
		pxDisk->xStatus.bIsInitialised = 0;
		if( pxDisk->pxIOManager != NULL )
		{
			if( FF_Mounted( pxDisk->pxIOManager ) != pdFALSE )
			{
				FF_Unmount( pxDisk );
			}
			FF_DeleteIOManager( pxDisk->pxIOManager );
		}

		vPortFree( pxDisk );
	}
	return 1;
}
/*-----------------------------------------------------------*/

BaseType_t FF_SDDiskShowPartition( FF_Disk_t *pxDisk )
{
FF_Error_t xError;
uint64_t ullFreeSectors;
uint32_t ulTotalSizeMB, ulFreeSizeMB;
int iPercentageFree;
FF_IOManager_t *pxIOManager;
const char *pcTypeName = "unknown type";
BaseType_t xReturn = pdPASS;

	if( pxDisk == NULL )
	{
		xReturn = pdFAIL;
	}
	else
	{
		pxIOManager = pxDisk->pxIOManager;

		FF_PRINTF( "Reading FAT and calculating Free Space\n" );

		switch( pxIOManager->xPartition.ucType )
		{
			case FF_T_FAT12:
				pcTypeName = "FAT12";
				break;

			case FF_T_FAT16:
				pcTypeName = "FAT16";
				break;

			case FF_T_FAT32:
				pcTypeName = "FAT32";
				break;

			default:
				pcTypeName = "UNKOWN";
				break;
		}

		FF_GetFreeSize( pxIOManager, &xError );

		ullFreeSectors = pxIOManager->xPartition.ulFreeClusterCount * pxIOManager->xPartition.ulSectorsPerCluster;
		iPercentageFree = ( int ) ( ( sdHUNDRED_64_BIT * ullFreeSectors + pxIOManager->xPartition.ulDataSectors / 2 ) /
			( ( uint64_t )pxIOManager->xPartition.ulDataSectors ) );

		ulTotalSizeMB = pxIOManager->xPartition.ulDataSectors / sdSECTORS_PER_MB;
		ulFreeSizeMB = ( uint32_t ) ( ullFreeSectors / sdSECTORS_PER_MB );

		/* It is better not to use the 64-bit format such as %Lu because it
		might not be implemented. */
		FF_PRINTF( "Partition Nr   %d\n", pxDisk->xStatus.bPartitionNumber );
		FF_PRINTF( "Type           %d (%s)\n", pxIOManager->xPartition.ucType, pcTypeName );
		FF_PRINTF( "VolLabel       '%s' \n", pxIOManager->xPartition.pcVolumeLabel );
		FF_PRINTF( "TotalSectors   %ld\n", pxIOManager->xPartition.ulTotalSectors );
		FF_PRINTF( "DataSectors    %ld\n", pxIOManager->xPartition.ulDataSectors );
		FF_PRINTF( "SecsPerCluster %ld\n", pxIOManager->xPartition.ulSectorsPerCluster );
		FF_PRINTF( "Size           %ld MB\n", ulTotalSizeMB );
		FF_PRINTF( "FreeSize       %ld MB ( %d perc free )\n", ulFreeSizeMB, iPercentageFree );
		FF_PRINTF( "BeginLBA       %ld\n", pxIOManager->xPartition.ulBeginLBA );
		FF_PRINTF( "FATBeginLBA    %ld\n", pxIOManager->xPartition.ulFATBeginLBA ); 
		//
		FF_PRINTF( "RootDirCluster    %ld\n", pxIOManager->xPartition.ulRootDirCluster );
		FF_PRINTF( "FirstDataSector   %ld\n", pxIOManager->xPartition.ulFirstDataSector );
	}

	return xReturn;
}
/*-----------------------------------------------------------*/