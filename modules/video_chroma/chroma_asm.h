#ifndef __CHROMA_ASM_H__
#define __CHROMA_ASM_H__

#include <cover_base.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_R5G5B5_mmx( filter_t *p_filter, picture_t *p_src, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_R5G5B5_sse2( filter_t *p_filter, picture_t *p_src, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_R5G6B5_mmx( filter_t *p_filter, picture_t *p_src, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_R5G6B5_sse2( filter_t *p_filter, picture_t *p_src, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_A8R8G8B8_mmx( filter_t *p_filter, picture_t *p_src, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_A8R8G8B8_sse2( filter_t *p_filter, picture_t *p_src, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_R8G8B8A8_mmx( filter_t *p_filter, picture_t *p_src,	picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_R8G8B8A8_sse2( filter_t *p_filter, picture_t *p_src,	picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_B8G8R8A8_mmx( filter_t *p_filter, picture_t *p_src, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_B8G8R8A8_sse2( filter_t *p_filter, picture_t *p_src, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_A8B8G8R8_mmx( filter_t *p_filter, picture_t *p_src, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_A8B8G8R8_sse2( filter_t *p_filter, picture_t *p_src, picture_t *p_dest );

EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_YUY2_mmx( filter_t *p_filter, picture_t *p_source, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_YUY2_sse2( filter_t *p_filter, picture_t *p_source, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_YVYU_mmx( filter_t *p_filter, picture_t *p_source, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_YVYU_sse2( filter_t *p_filter, picture_t *p_source, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_UYVY_mmx( filter_t *p_filter, picture_t *p_source, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_UYVY_sse2( filter_t *p_filter, picture_t *p_source, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_cyuv_mmx( filter_t *p_filter, picture_t *p_source, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I420_cyuv_sse2( filter_t *p_filter, picture_t *p_source, picture_t *p_dest );

EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I422_YUY2_mmx( filter_t *p_filter, picture_t *p_source, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I422_YUY2_sse2( filter_t *p_filter, picture_t *p_source, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I422_YVYU_mmx( filter_t *p_filter, picture_t *p_source, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I422_YVYU_sse2( filter_t *p_filter, picture_t *p_source, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I422_UYVY_mmx( filter_t *p_filter, picture_t *p_source, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I422_UYVY_sse2( filter_t *p_filter, picture_t *p_source, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I422_cyuv_mmx( filter_t *p_filter, picture_t *p_source, picture_t *p_dest );
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_I422_cyuv_sse2( filter_t *p_filter, picture_t *p_source, picture_t *p_dest );

#ifdef __cplusplus
}
#endif // __cplusplus

#endif
