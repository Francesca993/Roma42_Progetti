#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t i = 0;
	size_t j = ft_strlen(s1) - 1;
	size_t tot_len;
	char *new_string;

	if (!s1 || !set)
		return (NULL);
	while(s1[i] && ft_strchr(set, s1[i]))
		i++;
	while(s1[j] && ft_strchr(set, s1[j]) && i < j)
		j--;
	tot_len = j - i + 1;
	new_string = ft_substr(s1, i, tot_len);
	return (new_string);
}
