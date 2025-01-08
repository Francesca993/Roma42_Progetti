#include "get_next_line.h"

static int	read_and_store(int fd, char **storage)
{
	char	buffer[BUFFER_SIZE + 1];
	ssize_t	bytes_read;
	char	*temp;

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read <= 0)
		return (bytes_read);
	buffer[bytes_read] = '\0';
	temp = ft_strjoin(*storage, buffer);
	free(*storage);
	*storage = temp;
	if (!*storage)
		return (-1);
	return (bytes_read);
}

static char	*extract_line(char **storage)
{
	char	*line;
	char	*new_storage;
	size_t	i;

	i = 0;
	while((*storage)[i] != '\0' && (*storage)[i] != '\n')
		i++;
	if((*storage)[i] == '\n')
		line = ft_substr(*storage, 0, i + 1);
	else
		line = ft_substr(*storage, 0, i);
	if (line == NULL)
		return (NULL);
	if((*storage)[i] == '\n')
		new_storage = ft_strdup(*storage + i + 1);
	else
		new_storage = NULL;
	free(*storage);
	*storage = new_storage;
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*storage;
	int bytes_read;
	//char *new_line;
	

	if (fd < 0|| BUFFER_SIZE <= 0)
		return (NULL);
	if(!storage)
		storage = ft_strdup("");
	if(!storage)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0 && !ft_strchr(storage, '\n'))
		bytes_read = read_and_store(fd, &storage);
	if (bytes_read < 0 || (bytes_read == 0 && (!storage || *storage == '\0')))
	{
		free(storage);
		storage = NULL;
		return (NULL);
	}
	//new_line = extract_line(&storage);
	return (extract_line(&storage));
	//return (new_line);
}
