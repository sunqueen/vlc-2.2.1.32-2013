#ifndef __GRADFUN_ASM_H__
#define __GRADFUN_ASM_H__

#include <cover_base.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_filter_line_mmx2(uint8_t *dst, uint8_t *src, uint16_t *dc,
                             int width, int thresh, const uint16_t *dithers);
EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_filter_line_ssse3(uint8_t *dst, uint8_t *src, uint16_t *dc,
                              int width, int thresh, const uint16_t *dithers);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif
