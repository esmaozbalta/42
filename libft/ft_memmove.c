/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esozbalt <esozbalt@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:49:05 by esozbalt          #+#    #+#             */
/*   Updated: 2023/12/17 14:49:11 by esozbalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //??

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	const unsigned char	*s;
	size_t	i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (!d && !s)
	{
		return (NULL);
	}
	if (d > s) //bellek adreslerini kiyaslar
	{
		while (len-- > 0) //sondan baslayarak yazdirir
		{
			d[len] = s[len];
		}
	}
	else
	{
		while (i < len)//bastan baslayarak yazdirir
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
int main(void)
{
    const char cdizi1[] = "Bilgi";
     char cdizi2[] = "Programlar";

    printf("cdizi1 bellek içeriği: %s, cdizi2 bellek içeriği: %s\n", cdizi1, cdizi2);

    memmove(cdizi2, cdizi1, 4);

    printf("cdizi1 bellek içeriği: %s, cdizi2 bellek içeriği: %s\n", cdizi1, cdizi2);

    return 0;
}
