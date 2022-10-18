/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:56:16 by nrodrigu          #+#    #+#             */
/*   Updated: 2022/10/14 12:56:17 by nrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t  ft_strlen(const char *str)
{
  size_t i;
 
  i = 0;
  while(str[i])
    i++;
  return(i);
}

char  *ft_strjoin(const char s1, const char s2)
{
  unsigned int  y1;
  unsigned int  y2;
  unsigned int  i;
  unsigned int  x;
  char          *str;
  
  if(!s1 || !s2)
    return (NULL);
  y1 = ft_strlen(s1);
  y2 = ft_strlen(s2);
  i = 0;
  x = -1;
  str = malloc(sizeof(char)* (y1 + y2 + 1));
  if (!str)
    return (NULL);
  while (s1[i])
  {
    str[i] = s1[i];
    i++;
  }
  while (s2[++x])
    str[i++] = s2[x];
  str[i] = '\0';
  return (str);
}

  
