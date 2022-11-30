/*
int main(void)
{
   int     fd;
   char    *line;
 
   
   fd = open("fichero.txt", O_RDONLY); 
   //printf( "Number of fd is: %d", fd);
   line = ""; 
   while (line != NULL)
   {
       line = get_next_line(fd);
       printf( "%s", line);
   }
   fd = close(fd);
  }
*/

#include "get_next_line.h"

int	main(void)
{
	int	fd;
	char *line;
	int	i;
	
	i = 1;
	line="";
	fd=open("fichero2.txt", O_RDONLY);
	while(1)
	{
		line= get_next_line(fd);
		printf("Line  : %d for fd %d: %s\n", i, fd, line);
		if(!line)
		return(0);
		free(line);
		i++;
	}
}
