#ifndef __GRAIN_ASM_H__
#define __GRAIN_ASM_H__

#include <cover_base.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_BlockBlendSse2(uint8_t *dst, size_t dst_pitch,
                           const uint8_t *src, size_t src_pitch,
                           const int16_t *noise);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif
