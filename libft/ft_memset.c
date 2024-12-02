#include "libft.h"

 void *ft_memset(void *b, int c, size_t len)
 {
	 char *p = (char *)b;

	 size_t i = 0;
	 
	 while( i < len )
	 {
		 p[i] = c;
		 i++;
	 }
	 return(b);
 }
