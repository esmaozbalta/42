/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esozbalt <esozbalt@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:50:15 by esozbalt          #+#    #+#             */
/*   Updated: 2023/12/17 14:50:19 by esozbalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	//c += 48;
	int i;

	i = 0;
	while ((char)c != s[i])
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return ((char *)(s + i));
}
/*
int main(void)
{
    const char cdizi[] = "Bilgisayar";
    int cd = 'i';
    char *ret = ft_strchr(cdizi, cd);

    printf("Bulunan %d karakterinden itibaren dizi içeriği: %s", cd, ret);

    return 0;
}*/
