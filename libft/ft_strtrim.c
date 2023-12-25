/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esozbalt <esozbalt@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:34:33 by esozbalt          #+#    #+#             */
/*   Updated: 2023/12/17 17:34:34 by esozbalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	charcheck(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		start;
	int		end;

	start = 0;
	while (s1[start] && charcheck(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && charcheck(s1[end], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}

/*
char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;
	char *new;

	if (!s1 || !set)
	{
		return (NULL);
	}
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
	}
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
	{
		len--;
	}
	return (ft_substr(s1, 0, len + 1));
}
*/
int main()
{
	char const s1[] = "cemrmcce";
	char const s2[] = "cemmm";
	char *new;

	new = ft_strtrim(s1, s2);
	printf("%s", new);
}
