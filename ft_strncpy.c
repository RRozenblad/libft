#include <string.h>
#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t dsize)
{
    size_t	i;

    i = 0;
    while(src[i])
    {
	dst[i] = src[i];
	i++;
    }
    while(i < dsize)
    {
	dst[i] = '\0';
	i++;
    }
    return (dst);
}
