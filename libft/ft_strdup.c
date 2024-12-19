#include "libft.h"

char *ft_strdup(const char *s1)
{
	size_t s_len = ft_strlen(s1)+ 1;
	char *dup =(char *)malloc(s_len);

	if(dup == NULL)
		return (NULL);
	ft_strlcpy(dup, s1, s_len);
	return(dup);
}
