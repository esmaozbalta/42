/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esozbalt <esozbalt@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:48:12 by esozbalt          #+#    #+#             */
/*   Updated: 2023/12/17 14:48:17 by esozbalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;//unsigned?
	char	*str2;
	int		i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
    const char *cp1 = "Bilgi";
    const char *cp2 = "Bilgileri";
    int ret;

    ret = ft_memcmp(cp1, cp2, 10);

    if(ret<0) 
	{
		printf("cp1 bellek içeriği cp2 bellek içeriğinden küçüktür!");
	}
    else if(ret>0)
	{
		printf("cp2 bellek içeriği cp1 bellek içeriğinden küçüktür!");
	}
	else
	{
		printf("cp1 bellek içeriği cp2 bellek içeriğine eşittir!");
	}
    return 0;
}
*/