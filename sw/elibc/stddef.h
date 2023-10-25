#ifndef __STDDEF_H___
#define __STDDEF_H___

#ifndef _INT64_T_DECLARED
typedef long long int64_t;
#define _INT32_T_DECLARED
#endif

#ifndef _INT32_T_DECLARED
typedef long int32_t;
#define _INT32_T_DECLARED
#endif

#ifndef _INT16_T_DECLARED
typedef short int16_t;
#define _INT16_T_DECLARED
#endif

#ifndef _INT8_T_DECLARED
typedef char int8_t;
#define _INT8_T_DECLARED
#endif

#ifndef _INT64_T_DECLARED
typedef unsigned long long uint64_t;
#define _INT32_T_DECLARED
#endif

#ifndef _UINT32_T_DECLARED
typedef unsigned long uint32_t;
#define _UINT32_T_DECLARED
#endif

#ifndef _UINT16_T_DECLARED
typedef unsigned short uint16_t;
#define _UINT16_T_DECLARED
#endif

#ifndef _UINT8_T_DECLARED
typedef unsigned char uint8_t;
#define _UINT8_T_DECLARED
#endif

#if !defined(_SIZE_T_)
#define _SIZE_T
typedef unsigned long size_t;
#endif

#if !defined(_WCHAR_T_)
#define _WCHAR_T
typedef int wchar_t;
typedef unsigned int wint_t;
#endif

#if !defined(NULL)
#define NULL 0
#endif

#endif
