#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	void *p;
	size_t b;
	if (count != 0 && size > SIZE_MAX / count)
        return (NULL);
	b = count * size;
	if (count == 0 || size == 0)
        {
			b = 1;
		}

	p = malloc(b);
	if (p == NULL)
		return(NULL);
	else 
		ft_bzero(p, b);
	return(p);
}
/*
#include "stdio.h"

int main ()
{
	int *arr = (int *)ft_calloc(10, sizeof(int));
	 if (arr == NULL) 
	 {
        printf("Errore di allocazione memoria.\n");
        return 1;
    }

	size_t i;
	 i = 0;
	 while ( i < 10)
	 {
		 printf( "%d, \n", arr[i]);
		 i++;
	 }
	 free(arr);
	 return(0);
}
*/
