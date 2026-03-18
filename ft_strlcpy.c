#include "libft.h"


size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		dst[i] = src[i];
	return (ft_strlen(src));
}