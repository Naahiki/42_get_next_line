# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;
	i = 0;
	while(s[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	char			*cpy;

	cpy = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!cpy)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
	free(cpy);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while(str [i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			return(&str[i]);
		i++;
	}
	if((unsigned char)c == '\0')
		return (&str[i]);
	return (NULL);
}

	 
