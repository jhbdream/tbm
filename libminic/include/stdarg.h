#ifndef __stdarg_h__
#define __stdarg_h__

/* Use the builtins from GCC.  */
#define va_start(v,l)   __builtin_va_start(v,l)
#define va_end(v)       __builtin_va_end(v)
#define va_arg(v,l)     __builtin_va_arg(v,l)
#define va_copy(d,s)    __builtin_va_copy((d),(s))
#define __va_copy(d,s)  __builtin_va_copy((d),(s))

typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;

#endif

