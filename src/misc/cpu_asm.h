#ifndef __CPU_ASM_H__
#define __CPU_ASM_H__

#include <cover_base.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#if defined (__i386__) || defined (__x86_64__) || defined (__powerpc__) \
 || defined (__ppc__) || defined (__ppc64__) || defined (__powerpc64__)
# if !defined (WIN32) && !defined (__OS2__)

#if defined (CAN_COMPILE_SSE) && !defined (__SSE__)
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_SSE_test (void);
#endif
#if defined (CAN_COMPILE_3DNOW) && !defined (__3dNOW__)
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_ThreeD_Now_test (void);
#endif

#if defined (CAN_COMPILE_ALTIVEC)
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_Altivec_test (void);
#endif

#endif
#endif

EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_cpuid(unsigned int reg, unsigned int *i_eax, unsigned int *i_ebx, unsigned int *i_ecx, unsigned int *i_edx);
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_vlc_CPU_init1(unsigned int *i_eax, unsigned int *i_ebx);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif