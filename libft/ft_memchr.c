#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *str;

	i = 0;
	str = (char *)s;

	while (i < n)
	{
		if((unsigned char) str[i] == (unsigned char) c)
		{
			return((char *) s + i);
		}
		i++;
	}
	return(NULL);
}
