/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esozbalt <esozbalt@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:50:29 by esozbalt          #+#    #+#             */
/*   Updated: 2023/12/17 14:50:32 by esozbalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)//s1 in kopyasini olusturup dinamik bellekte saklamak
{
	size_t	len;
	char	*dst;

	len = ft_strlen(s1) + 1; //null karakteri icin +1
	dst = (char *)malloc(sizeof(char) * len); //len kadar bellek alani ayrilir
	if (!dst) //kontrol
	{
		return (NULL);
	}
	ft_strlcpy(dst, s1, len); //s1 i dst ye len kadar kopyala
	return (dst);
}
/*
int main(void)
{
    const char *cp1 = "Bilgisayar";
    char *cp2 = ft_strdup(cp1);

    printf("İlk karakter dizisi: %s\n", cp1);
    printf("Benzer olarak oluşturulan karakter dizisi: %s", cp2);

    return 0;
}
*/
