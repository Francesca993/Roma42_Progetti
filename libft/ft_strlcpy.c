#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	if(size > 0)
	{
		size_t i;
		i = 0;
		while( (i < size - 1) && (src[i] != '\0'))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	size_t j;
	j = 0;

	while (src[j] != '\0')
		j++;
		return(j);
}
