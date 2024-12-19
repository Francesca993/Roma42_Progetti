#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	unsigned char uc = (unsigned char)c;

	while(*s)
	{
		if ((char)*s == uc)
		{
			return ((char *)s);
		}
		s++;
	}
		if (uc == '\0')
			return ((char *)s);
	return (NULL);
}
