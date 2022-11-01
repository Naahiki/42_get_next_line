#include "get_next_line.h"


static char	*read_lines(int fd, char *buf, char *save)
{
	int	read;
	int	*aux;

	read = 1;
	while (read != '\0')
	{
		read = read(fd, buf, BUFFER_SIZE);
		if (read == -1)
			return (0);
		else if (read == 0)
			break ;
			aux = save;
		save = ft_strjoin(aux, buf);
		free(aux);
		aux = NULL;
	 if(strchr ( buf, '\n'))
	 break;
	 }
	 return (save);
}




char	*get_next_line(int fd)
{
	char	*line;
	char	*buf;
	static char	*save;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buf = (char *)malloc(sizeof(char)* (BUFFER_SIZE + 1));
	if (!buf)
		return (0);
	line = read_lines(fd, buf, save);
	free(buf);
	buf = NULL;
	if (!line)
		return (NULL);
	save =
	
