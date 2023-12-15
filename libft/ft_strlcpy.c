/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esozbalt <esozbalt@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:42:38 by esozbalt          #+#    #+#             */
/*   Updated: 2023/12/09 17:42:40 by esozbalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	
	i = 0;
	while (src[i])
		i++;
	return (i);
	//return (ft_strlen(src));
}
/*
int main() 
{
   char s2[] = "Hello world!";
   char s1[50];
   int copy = 5;

   size_t size = ft_strlcpy(s1, s2, copy);
   printf("%zu, %d, %s, %s", size, (copy-1), s1, s2);

   return (0);
}
*/