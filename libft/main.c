#include <stdio.h>
#include "libft.h"

int main(void)
{
    // Test cases
    const char *tests1 = "Ciao";
    const char *tests2 = "Ma dai!";
    const char *tests3 = "Ciao mondo";
    const char *tests4 = "Mamma guarda come mi diverto";

    // Array di stringhe da confrontare
    const char *test_strings[] = {tests1, tests2, tests3, tests4};
    size_t num_tests = sizeof(test_strings) / sizeof(test_strings[0]);

    // Numero di caratteri da confrontare
    size_t n_values[] = {4, 7, 10, 25};
    size_t num_n = sizeof(n_values) / sizeof(n_values[0]);

    // Test della funzione ft_strncmp
    for (size_t i = 0; i < num_tests; i++)
    {
        for (size_t j = 0; j < num_tests; j++)
        {
            for (size_t k = 0; k < num_n; k++)
            {
                size_t n = n_values[k];
                int result = ft_strncmp(test_strings[i], test_strings[j], n);
                printf("Confronto tra \"%s\" e \"%s\" (n = %zu): ", test_strings[i], test_strings[j], n);
                if (result < 0)
                    printf("Risultato: %d (Prima stringa < Seconda stringa)\n", result);
                else if (result == 0)
                    printf("Risultato: %d (Stringhe uguali fino a n caratteri)\n", result);
                else
                    printf("Risultato: %d (Prima stringa > Seconda stringa)\n", result);
            }
        }
    }

    // Test con puntatori
    printf("Indirizzo di tests1: %p\n", (void *)tests1);

    return 0;
}

