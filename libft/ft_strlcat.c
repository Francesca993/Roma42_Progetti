#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i = 0;
	size_t	dest_len = 0;
	size_t src_len = ft_strlen(src);

	while(dst[dest_len] != '\0' && dest_len <= size)
	{
		dest_len ++;
	}
	if(dest_len >= size || size == 0)
	{
		return(size + src_len);
	}
	while(src[i] != '\0' && (dest_len + i + 1) < size)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	if(dest_len + i == size ||src[i] != '\0')
		{
			dst[dest_len + i] = '\0';
		}
		return(dest_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char dest[50] = "Hello, ";
    const char *src = "world!";
    size_t size = sizeof(dest);

    printf("Before ft_strlcat:\n");
    printf("dest: '%s'\n", dest);
    printf("src: '%s'\n", src);

    // Call your ft_strlcat function
    size_t result = ft_strlcat(dest, src, size);

    printf("\nAfter ft_strlcat:\n");
    printf("dest: '%s'\n", dest);
    printf("Return value: %zu\n", result);

    // Testing edge case: destination buffer too small
    char small_dest[10] = "Hi ";
    const char *small_src = "there!";
    size_t small_size = sizeof(small_dest);

    printf("\nBefore edge case test:\n");
    printf("small_dest: '%s'\n", small_dest);
    printf("small_src: '%s'\n", small_src);

    result = ft_strlcat(small_dest, small_src, small_size);

    printf("\nAfter edge case test:\n");
    printf("small_dest: '%s'\n", small_dest);
    printf("Return value: %zu\n", result);

    return 0;
}
*/
