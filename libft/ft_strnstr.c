#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;
	size_t j;

	j=0;
	i=0;

	if(needle == NULL || needle[0] == '\0')
		return((char *)haystack);

		while(haystack[i] != '\0' && i < n)
		{
			if(haystack[i] == needle[j])
			{
				while(haystack[i+j] == needle[j] && i+j < n)
				{
					if(needle[j+1] == '\0')
						return((char *)haystack+i);
					j++;
				}
				j=0;
			}
			i++;
		}
		return(NULL);
}
/*
#include <stdio.h>
int main()
{
	char *str1 = "hello world";
	char *str2 = "world";

	char *result = (ft_strnstr(str1, str2, 12));
	
	if(result)
	{
		printf("occorrenza trovata: '%s'\n", result);
	}
	else
		printf("nn ho trovato occorrenze");

return(0);
}
*/
