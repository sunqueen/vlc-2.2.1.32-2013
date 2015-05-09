#ifndef __DEINTERLACE_ASM_H__
#define __DEINTERLACE_ASM_H__

#include <cover_base.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_MergeMMXEXT( void *_p_dest, const void *_p_s1, const void *_p_s2,
                         size_t i_bytes );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_Merge3DNow( void *_p_dest, const void *_p_s1, const void *_p_s2,
                        size_t i_bytes );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_Merge8BitSSE2( void *_p_dest, const void *_p_s1, const void *_p_s2,
                    size_t i_bytes );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_Merge16BitSSE2( void *_p_dest, const void *_p_s1, const void *_p_s2,
                     size_t i_bytes );

#ifdef __cplusplus
}
#endif // __cplusplus

#endif
