/* config.h.in.  Generated from configure.in by autoheader.  */
#undef HAVE_INET_PTON
#undef HAVE_INET_ATON
#undef HAVE_MSG_NOSIGNAL
#undef HAVE_SOL_IP
#undef HAVE_SOL_TCP
#undef HAVE_SOL_IPV6
#undef HAVE_IP_PKTINFO
#undef HAVE_STRUCT_IP_MREQN
#undef HAVE_STRUCT_IP_MREQ
#undef HAVE_PTHREAD_MUTEX_TIMEDLOCK
#undef USE_MONO_MUTEX
#undef HAVE_LARGE_FILE_SUPPORT
#undef HAVE_NEW_ICONV
#undef NAME_DEV_RANDOM
#undef HAVE_CRYPT_RNG
#undef HAVE_BOEHM_GC
#undef USE_INCLUDED_LIBGC
#undef DISABLE_SHARED_HANDLES
#undef HAVE_TIMEZONE
#undef HAVE_TM_GMTOFF
#undef MONO_SIZEOF_SUNPATH
#undef MONO_ZERO_ARRAY_LENGTH
#undef PTHREAD_POINTER_ID
#undef HAVE_GC_H
#undef HAVE_GC_GCJ_MALLOC
#undef HAVE_GC_ENABLE
#undef WITH_BUNDLE
#undef HAVE_GETHOSTBYNAME2_R
#undef HAVE_ICU
#undef HAVE_KW_THREAD
#undef HAVE_SIGNBIT
#undef USE_MACH_SEMA
#undef HAVE_SOCKLEN_T
#undef HAVE_TRUNCL
#undef HAVE_AINTL
#undef HAVE_SCANDIR
#undef HAVE_WORKING_SIGALTSTACK

#define _WIN32_WINNT 0x0500
#define WINVER 0x0500

#include <float.h>

#ifdef _WIN32
#define isnan _isnan
#define finite _finite
#endif

#define __FUNCTION__ __FILE__

#define MONO_ASSEMBLIES ".\\"

/* Define to 1 if you have the <aio.h> header file. */
#undef HAVE_AIO_H

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H

/* Define to 1 if you have the <elf.h> header file. */
#undef HAVE_ELF_H

/* Define to 1 if you have the `finite' function. */
#undef HAVE_FINITE

/* Define to 1 if you have the <gc/gc.h> header file. */
#undef HAVE_GC_GC_H

/* Define to 1 if you have the <gc.h> header file. */
#undef HAVE_GC_H

/* Define to 1 if you have the `getgrgid_r' function. */
#undef HAVE_GETGRGID_R

/* Define to 1 if you have the `getgrnam_r' function. */
#undef HAVE_GETGRNAM_R

/* Define to 1 if you have the `getpwnam_r' function. */
#undef HAVE_GETPWNAM_R

/* Define to 1 if you have the `getpwuid_r' function. */
#undef HAVE_GETPWUID_R

/* Define to 1 if you have the `getresuid' function. */
#undef HAVE_GETRESUID

/* Define to 1 if you have the `inet_aton' function. */
#undef HAVE_INET_ATON

/* Define to 1 if you have the `inet_pton' function. */
#undef HAVE_INET_PTON

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define to 1 if you have the `isfinite' function. */
#undef HAVE_ISFINITE

/* Define to 1 if you have the `kqueue' function. */
#undef HAVE_KQUEUE

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the <netdb.h> header file. */
#undef HAVE_NETDB_H

/* Define to 1 if you have the `poll' function. */
#undef HAVE_POLL

/* Define to 1 if you have the `pthread_attr_get_np' function. */
#undef HAVE_PTHREAD_ATTR_GET_NP

/* Define to 1 if you have the `pthread_attr_setstacksize' function. */
#undef HAVE_PTHREAD_ATTR_SETSTACKSIZE

/* Define to 1 if you have the `pthread_getattr_np' function. */
#undef HAVE_PTHREAD_GETATTR_NP

/* Define to 1 if you have the <pthread.h> header file. */
#undef HAVE_PTHREAD_H

/* Define to 1 if you have the `pthread_mutex_timedlock' function. */
#undef HAVE_PTHREAD_MUTEX_TIMEDLOCK

/* Define to 1 if you have the <semaphore.h> header file. */
#undef HAVE_SEMAPHORE_H

/* Define to 1 if you have the `setresuid' function. */
#undef HAVE_SETRESUID

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#undef HAVE_STDLIB_H

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#undef HAVE_STRING_H

/* Define to 1 if you have the <sys/aio.h> header file. */
#undef HAVE_SYS_AIO_H

/* Define to 1 if you have the <sys/filio.h> header file. */
#undef HAVE_SYS_FILIO_H

/* Define to 1 if you have the <sys/sockio.h> header file. */
#undef HAVE_SYS_SOCKIO_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#undef HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/types.h> header file. */
#undef HAVE_SYS_TYPES_H

/* Define to 1 if you have the <sys/un.h> header file. */
#undef HAVE_SYS_UN_H

/* Define to 1 if you have the `trunc' function. */
#undef HAVE_TRUNC

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to 1 if you have the <utime.h> header file. */
#undef HAVE_UTIME_H

/* Define to 1 if you have the <valgrind/memcheck.h> header file. */
#undef HAVE_VALGRIND_MEMCHECK_H

/* Define to 1 if you have the <wchar.h> header file. */
#undef HAVE_WCHAR_H

/* Define if Unix sockets cannot be created in an anonymous namespace */
#undef NEED_LINK_UNLINK

/* Name of package */
#undef PACKAGE

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* Platform is Win32 */
#define PLATFORM_WIN32 1

#define PATH_MAX MAX_PATH

/* Pointer field name in 'union sigval' */
#undef SIGVAL_PTR

/* The size of a `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 4

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* Version number of package */
#define VERSION "1.0.5"
