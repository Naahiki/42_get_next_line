
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:56:16 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/10/23 18:33:07 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	y1;
	unsigned int	y2;
	unsigned int	i;
	unsigned int	x;
	char			*str1;

	if (!s1 || !s2)
		return (NULL);
	y1 = ft_strlen(s1);
	y2 = ft_strlen(s2);
	i = 0;
	x = -1;
	str1 = malloc (sizeof(char) * (y1 + y2 + 1));
	if (!str1)
		return (NULL);
	while (s1[i])
	{
		str1[i] = s1[i];
		i++;
	}
	while (s2[++x])
		str1[i++] = s2[x];
	str1[i] = '\0';
	return (str1);
}	 
