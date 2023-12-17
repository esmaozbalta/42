/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esozbalt <esozbalt@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:48:27 by esozbalt          #+#    #+#             */
/*   Updated: 2023/12/17 14:48:31 by esozbalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int	i;
	char	*d; //unsigned?
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

int main(void)
{
    const char *cp = "Bilgisayar&Programlama";
    char dest[40];

    //memset(dest, '\0', 40);
    ft_memcpy(dest, cp, 40);
    printf("%s\n", dest);

    return 0;
}
