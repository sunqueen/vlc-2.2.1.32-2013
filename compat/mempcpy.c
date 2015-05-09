#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <string.h>

void *mempcpy(void *dst, const void *src, size_t len)
{
    return (void *)((char *)memcpy(dst, src, len) + len);
}
