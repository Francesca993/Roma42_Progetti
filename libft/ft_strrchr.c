#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int		 i;
	unsigned char c_cast;

	i = ft_strlen(s);
	c_cast = (unsigned char)c;

	if (c == '\0')
		return((char*)s + i);
		
	while (i >= 0)
	{
		if((char)s[i] == c_cast)
		{
			return((char*)s + i);
		}
			i--;
	}
	return(NULL);
}
