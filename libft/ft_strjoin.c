#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t i = 0;
	size_t j = 0;
	size_t tot_len;
	char *n_str;
	tot_len = ft_strlen(s1) + ft_strlen(s2);
	n_str = (char *)malloc(tot_len + 1);

	 if (!s1 || !s2) // Verifica se s1 o s2 sono NULL
        return NULL;
	if(!n_str)
		return(NULL);
	while(s1[i])
	{
		n_str[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		n_str[i+j] = s2[j];
		j++;
	}
	n_str[i+j] = 0;
	return(n_str);
}
