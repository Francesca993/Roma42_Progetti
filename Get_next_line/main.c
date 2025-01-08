#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(int argc, char *argv[])
{
    int     fd;
    char    *line;

    // Controllo se l'utente ha fornito un file come argomento
    if (argc != 2)
    {
        printf("Uso: %s <nome_file>\n", argv[0]);
        return (1);
    }

    // Apertura del file
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("Errore nell'apertura del file");
        return (1);
    }

    // Lettura e stampa di ogni riga usando get_next_line
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Riga letta: %s", line);
        free(line);  // Libera la memoria dopo l'uso
    }

    // Chiusura del file descriptor
    close(fd);
    return (0);
}

