#include "libft.h"

static int ft_count(const char *s, char c)
{
	int	count;
	int i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while(s[i] == c)
		{
			i++;
		}
		if(s[i] != '\0')
		{
			count++;
			while(s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return(count);
}

static int ft_wlen(const char *s, char c)
{
	int len;

	len = 0;
	while(s[len] && s[len] != c)
	{
		len ++;
	}
	return (len);
}


char **ft_split(char const *s, char c)
{
	char **matrice;
	int count;
	int i;
	int word_len;

	if(!s)
		return(NULL);
	
	count = ft_count(s, c);
	matrice = (char **)malloc((count + 1) *sizeof(char*));
	if(!matrice)
		return(NULL);
	i = 0;
	while(*s)
	{
		if(*s != c)
		{
			word_len = ft_wlen(s, c);
			matrice[i] = ft_substr(s, 0, word_len);
			if(!matrice[i])
			{
				while ( i > 0)
					free(matrice[--i]);
				free(matrice);
				return(NULL);
			}
			i++;
			s += word_len;
		}
		else
			s++;
	}
	matrice[i] = NULL;
	return(matrice);
}
