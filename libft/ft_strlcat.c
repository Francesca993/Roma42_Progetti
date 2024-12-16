#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i = 0;
	size_t dest_len = 0;
	size_t src_len = ft_strlen(src);

	while(dst[dest_len] != '\0' && dest_len < size)
	{
		dest_len++;
	}
	while(src[i] && (dest_len + i +1 )< size)
	{
		dest[dest_len + i] = src[i];
		i++;
		
	}
	dst[dest_len+i] = '\0';
	return(ret);
}
