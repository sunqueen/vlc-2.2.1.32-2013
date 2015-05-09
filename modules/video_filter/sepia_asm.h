#ifndef __DEINTERLANCE_ASM_H__
#define __DEINTERLANCE_ASM_H__

#include <cover_base.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

EXTERN_SYMBOL DLL_SYMBOL void CDECL_SYMBOL cover_Sepia8ySSE2(uint8_t * dst, const uint8_t * src,
                         int i_intensity_spread);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif
