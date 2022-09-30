// =============================================================================
//  Program : rtos_hello.c
//  Author  : Chun-Jen Tsai
//  Date    : Dec/11/2021
// -----------------------------------------------------------------------------
//  Description:
//  This is a multi-thread program to demo the usage of FreeRTOS.
//
// -----------------------------------------------------------------------------
//  Revision information:
//
//  None.
// =============================================================================

/* Standard includes. */
#include <stdio.h>
#include <string.h>

/* FreeRTOS includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"

void vApplicationMallocFailedHook(void);
void vApplicationIdleHook(void);
void vApplicationStackOverflowHook(TaskHandle_t pxTask, char *pcTaskName);
void vApplicationTickHook(void);

void Task1_Handler(void *pvParameters);
void Task2_Handler(void *pvParameters);

int main(void)
{
    printf("FreeRTOS on RISC-V\r\n");
    printf("portTICK_PERIOD_MS = %ld\n", portTICK_PERIOD_MS);

    xTaskCreate(Task1_Handler, "Task1", 256, NULL, 3, NULL);
    xTaskCreate(Task2_Handler, "Task2", 256, NULL, 4, NULL);

    vTaskStartScheduler();
}

void Task1_Handler(void *pvParameters)
{
    int idx = 0;

    while (idx++ < 10)
    {
        printf("\r\nThis is Task1.\r\n");
        vTaskDelay(1000/portTICK_PERIOD_MS);        // 1 sec
    }

    /* The thread has ended, we must delete this task from the task queue. */
    vTaskDelete(NULL);
}

void Task2_Handler(void *pvParameters)
{
    int idx = 0;

    while (idx++ < 5)
    {
        printf("\r\nThis is Task2.\r\n");
        vTaskDelay(2000/portTICK_PERIOD_MS);        // 2 sec
    }

    /* The thread has ended, we must delete this task from the task queue. */
    vTaskDelete(NULL);
}

void vApplicationMallocFailedHook(void)
{
    /* vApplicationMallocFailedHook() will only be called if
       configUSE_MALLOC_FAILED_HOOK is set to 1 in FreeRTOSConfig.h.  It is a hook
       function that will get called if a call to pvPortMalloc() fails.
       pvPortMalloc() is called internally by the kernel whenever a task, queue,
       timer or semaphore is created.  It is also called by various parts of the
       demo application.  If heap_1.c or heap_2.c are used, then the size of the
       heap available to pvPortMalloc() is defined by configTOTAL_HEAP_SIZE in
       FreeRTOSConfig.h, and the xPortGetFreeHeapSize() API function can be used
       to query the size of free heap space that remains (although it does not
       provide information on how the remaining heap might be fragmented). */
    taskDISABLE_INTERRUPTS();
    for (;;);
}

void vApplicationIdleHook(void)
{
    /* vApplicationIdleHook() will only be called if configUSE_IDLE_HOOK is set
       to 1 in FreeRTOSConfig.h.  It will be called on each iteration of the idle
       task.  It is essential that code added to this hook function never attempts
       to block in any way (for example, call xQueueReceive() with a block time
       specified, or call vTaskDelay()).  If the application makes use of the
       vTaskDelete() API function (as this demo application does) then it is also
       important that vApplicationIdleHook() is permitted to return to its calling
       function, because it is the responsibility of the idle task to clean up
       memory allocated by the kernel to any task that has since been deleted. */
}

void vApplicationStackOverflowHook(TaskHandle_t pxTask, char *pcTaskName)
{
    (void) pcTaskName;
    (void) pxTask;

    /* Run time stack overflow checking is performed if
       configCHECK_FOR_STACK_OVERFLOW is defined to 1 or 2.  This hook
       function is called if a stack overflow is detected. */
    taskDISABLE_INTERRUPTS();
    printf("Stack overflow error.\n");
    for (;;);
}

void vApplicationTickHook(void)
{
    /* vApplicationTickHook */
}

void vAssertCalled(void)
{
    taskDISABLE_INTERRUPTS();
    while (1)
    {
        __asm volatile ("NOP");
    }
}

void vExternalISR( uint32_t cause )
{
}

