#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char buffer1[10];
    char buffer2[10];

    // Test con ft_memset
    ft_memset(buffer1, 'A', sizeof(buffer1) - 1);
    buffer1[9] = '\0'; // Aggiungi il terminatore

    // Test con memset
    memset(buffer2, 'A', sizeof(buffer2) - 1);
    buffer2[9] = '\0'; // Aggiungi il terminatore

    // Confronta i risultati
    printf("ft_memset: %s\n", buffer1);
    printf("memset:   %s\n", buffer2);

	 // Test con ft_bzero
    ft_bzero(buffer1, sizeof(buffer1) - 1);
    buffer1[9] = '\0'; // Aggiungi il terminatore

    // Test con memset
    bzero(buffer2, sizeof(buffer2) - 1);
    buffer2[9] = '\0'; // Aggiungi il terminatore

	for(size_t i = 0; i < sizeof(buffer1) ; i++)
	{
		printf("%d ", buffer1[i]);
	}
	printf("\n");
	for(size_t i = 0; i < sizeof(buffer2); i++)
	{
		printf("%d ", buffer2[i]);
	}
    printf("\n");

    return 0;
}

