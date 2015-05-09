#ifndef __COPY_ASM_H__
#define __COPY_ASM_H__

#include <cover_base.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_CopyFromUswc(uint8_t *dst, size_t dst_pitch,
                         const uint8_t *src, size_t src_pitch,
                         unsigned width, unsigned height,
                         unsigned cpu);
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_Copy2d(uint8_t *dst, size_t dst_pitch,
                   const uint8_t *src, size_t src_pitch,
                   unsigned width, unsigned height);
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_SSE_SplitUV(uint8_t *dstu, size_t dstu_pitch,
                        uint8_t *dstv, size_t dstv_pitch,
                        const uint8_t *src, size_t src_pitch,
                        unsigned width, unsigned height, unsigned cpu);
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_SSE_CopyPlane(uint8_t *dst, size_t dst_pitch,
                          const uint8_t *src, size_t src_pitch,
                          uint8_t *cache, size_t cache_size,
                          unsigned width, unsigned height, unsigned cpu);
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_SSE_SplitPlanes(uint8_t *dstu, size_t dstu_pitch,
                            uint8_t *dstv, size_t dstv_pitch,
                            const uint8_t *src, size_t src_pitch,
                            uint8_t *cache, size_t cache_size,
                            unsigned width, unsigned height, unsigned cpu);
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_SSE_CopyFromNv12(picture_t *dst,
                             uint8_t *src[2], size_t src_pitch[2],
                             unsigned width, unsigned height,
                             copy_cache_t *cache, unsigned cpu);
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_SSE_CopyFromYv12(picture_t *dst,
                             uint8_t *src[3], size_t src_pitch[3],
                             unsigned width, unsigned height,
                             copy_cache_t *cache, unsigned cpu);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif