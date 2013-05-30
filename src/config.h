/* src/config.h.  Generated from config.h.in by configure.  */
/* src/config.h.in.  Generated from configure.ac by autoheader.  */

/* Lua is available */
/* #undef ENABLE_LUA */

/* Python3 is available */
/* #undef ENABLE_PYTHON */

/* Define to 1 if you have the declaration of `PR_CAPBSET_DROP', and to 0 if
   you don't. */
#define HAVE_DECL_PR_CAPBSET_DROP 1

/* Define to 1 if you have the `endmntent' function. */
/* #undef HAVE_ENDMNTENT */

/* Define to 1 if you have the `fgetln' function. */
#define HAVE_FGETLN 1

/* Define to 1 if you have the `getline' function. */
/* #undef HAVE_GETLINE */

/* Define to 1 if you have the `hasmntopt' function. */
/* #undef HAVE_HASMNTOPT */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `apparmor' library (-lapparmor). */
/* #undef HAVE_LIBAPPARMOR */

/* Define to 1 if you have the `seccomp' library (-lseccomp). */
/* #undef HAVE_LIBSECCOMP */

/* Define to 1 if you have the `util' library (-lutil). */
#define HAVE_LIBUTIL 1

/* Define to 1 if you have the <linux/genetlink.h> header file. */
#define HAVE_LINUX_GENETLINK_H 1

/* Define to 1 if you have the <linux/netlink.h> header file. */
#define HAVE_LINUX_NETLINK_H 1

/* Define to 1 if you have the <linux/unistd.h> header file. */
#define HAVE_LINUX_UNISTD_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `openpty' function. */
/* #undef HAVE_OPENPTY */

/* Define to 1 if you have the `pivot_root' function. */
/* #undef HAVE_PIVOT_ROOT */

/* Define to 1 if you have the <pty.h> header file. */
/* #undef HAVE_PTY_H */

/* Define to 1 if the system has the type `scmp_filter_ctx'. */
/* #undef HAVE_SCMP_FILTER_CTX */

/* Define to 1 if you have the `sethostname' function. */
/* #undef HAVE_SETHOSTNAME */

/* Define to 1 if you have the `setmntent' function. */
/* #undef HAVE_SETMNTENT */

/* Define to 1 if you have the `setns' function. */
/* #undef HAVE_SETNS */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/capability.h> header file. */
/* #undef HAVE_SYS_CAPABILITY_H */

/* Define to 1 if you have the <sys/personality.h> header file. */
#define HAVE_SYS_PERSONALITY_H 1

/* Define to 1 if you have the <sys/signalfd.h> header file. */
/* #undef HAVE_SYS_SIGNALFD_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/timerfd.h> header file. */
/* #undef HAVE_SYS_TIMERFD_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unshare' function. */
#define HAVE_UNSHARE 1

/* Define to 1 if you have the <utmpx.h> header file. */
/* #undef HAVE_UTMPX_H */

/* bionic libc */
#define IS_BIONIC 1

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Name of package */
#define PACKAGE "lxc"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "lxc"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "lxc 0.9.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "lxc"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.9.0"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "0.9.0"

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */
