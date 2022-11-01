
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <nrodrigu@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:55:55 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/10/26 20:08:48 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

static char	*read_lines(int fd, char *buf, char *save)
{
	int	read_line;
	char	*aux;

	read_line = 1;
	while (read_line != '\0')
	{
		read_line = read(fd, buf, BUFFER_SIZE);
		if (read_line == -1)
			return (0);
		else if (read_line == 0)
			break ;
			aux = save;
		save = ft_strjoin(aux, buf);
		free(aux);
		aux = NULL;
	 if(ft_strchr ( buf, '\n'))
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
}


	
int main(int argc, char **argv)
{
   int     fd;
   char    *line;
 
   (void)argc; 
   fd = open(argv[1], O_RDONLY); 
   line = ""; 
   while (line != NULL)
   {
       line = get_next_line(fd);
       printf("%s", line);
   }
   fd = close(fd);
   return (0);
}
