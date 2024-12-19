#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i = 0;
	char *d = (char *)dest;
	char *s =(char *)src;

	while ( i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
