/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esozbalt <esozbalt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:38:21 by esozbalt          #+#    #+#             */
/*   Updated: 2024/03/03 19:01:13 by esozbalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(char *s, char c)
{
	if (s == NULL || c == '\0')
		return (NULL);
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*res;

	if (!s1) //buffer ilk başta NULL
	{
		s1 = malloc(sizeof(char) * 1);
		s1[0] = '\0'; //null atar
	}
	if (!s1 || !s2)
		return (NULL);
	i = -1;
	res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	while (s1[++i]) //1. indexten başladığı için buna giremez çünkü 0 da null var
		res[i] = s1[i];
	j = 0;
	while (s2[j])
		res[i++] = s2[j++]; //stryi kopyalar
	res[i] = '\0';
	free(s1);
	return (res);
}
