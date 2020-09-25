#define JPEG_LIB_VERSION  80
#define LIBJPEG_TURBO_VERSION  
#define LIBJPEG_TURBO_VERSION_NUMBER  2000000

#define C_ARITH_CODING_SUPPORTED
#define D_ARITH_CODING_SUPPORTED
#define MEM_SRCDST_SUPPORTED
/* #undef WITH_SIMD */

#define BITS_IN_JSAMPLE  8

#define HAVE_STDDEF_H
#define HAVE_STDLIB_H
#undef NEED_SYS_TYPES_H
#undef NEED_BSD_STRINGS

#define HAVE_UNSIGNED_CHAR
#define HAVE_UNSIGNED_SHORT
#undef INCOMPLETE_TYPES_BROKEN
#undef RIGHT_SHIFT_IS_UNSIGNED
#undef __CHAR_UNSIGNED__

/* Define "boolean" as unsigned char, not int, per Windows custom */
#ifndef __RPCNDR_H__            /* don't conflict if rpcndr.h already read */
typedef unsigned char boolean;
#endif
#define HAVE_BOOLEAN            /* prevent jmorecfg.h from redefining it */

/* Define "INT32" as int, not long, per Windows custom */
#if !(defined(_BASETSD_H_) || defined(_BASETSD_H))   /* don't conflict if basetsd.h already read */
typedef short INT16;
typedef signed int INT32;
#endif
#define XMD_H                   /* prevent jmorecfg.h from redefining it */

#define JPEG_SHARED_LIBS 1
