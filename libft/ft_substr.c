#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	size_t i;
	size_t j;

	substr = (char *)malloc(sizeof(*s) * (len +1));

	if (str == 0)
		return (NULL);
	
	i = 0;
	j = 0;

	while(s[i])
	{
		if (i >= start && j < len)
		{
			substr[j] = s[i];
			j++;
		}
		i++;
	}
	substr[j] = 0;
	return (substr);
}
