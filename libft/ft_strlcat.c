#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	size_t ret = ft_strlen(dst) + ft_strlen(src);

	while(dst[i] && i < size)
	{
		i++;
	}
	while(src[j] && ((i - 1) < size))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return(ret);
}
