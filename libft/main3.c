#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <string.h>

int main()
{
    char src[] = "HelloWorld";
    char dest[6];

    size_t len = ft_strlcpy(dest, src, sizeof(dest));
	

    char test2[] = "HelloWorld";
    char dest2[6];

    size_t len2 = strlcpy(dest2, test2, sizeof(dest2));
    
 
    printf("Dest: %s\n", dest);    // Output: "Hello"
    printf("Src Len: %zu\n", len); // Output: 10 (lunghezza completa di src)


    printf("Dest con funz originale: %s\n", dest2);    // Output: "Hello"
    printf("Src Len con funz originale: %zu\n", len2); // Output: 10 (lunghezza completa di src)

    return 0;
}

