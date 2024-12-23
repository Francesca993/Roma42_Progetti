#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (!s || !f)
		return(NULL);
	i = 0;
	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if(!result)
		return(NULL);
	while(s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return(result);
}
