#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	size_t i;
	size_t s_len;

	if(!s)
		return(NULL);

	s_len = ft_strlen(s);

	if (start >= s_len)
		len = 0;
	if(len > s_len - start)
		len = s_len -start;
	substr = (char *)malloc(sizeof(*s) * (len + 1));
    if (!substr)
        return (NULL);
	i = 0;
	while ( i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	  substr[i] = '\0';

    return (substr);
}
