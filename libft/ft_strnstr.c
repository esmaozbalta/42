/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esozbalt <esozbalt@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:53:23 by esozbalt          #+#    #+#             */
/*   Updated: 2023/12/17 14:53:26 by esozbalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	i = 0;
	if (needle_len == 0)
	{
		return ((char *)haystack);
	}
	if (len == 0)
	{
		return (NULL);
	}
	while (haystack[i] != '\0' && i + needle_len <= len)
	{
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

int				main(void)
{
	char			dest[50] = "sefsfesa";
	char			src[50] = "fsf";
	unsigned int	size;

	size = 11;
	printf("%s\n", ft_strnstr(dest, src, size));
//	printf("%d\n", ft_strlcat(dest, src, size));
	printf("dest: %s\nsrc: %s\n", dest, src);
/*
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Ba";
    char *ptr;

    ptr = strnstr(largestring, smallstring, 15);
	printf("%s", ptr);
*/   
}
