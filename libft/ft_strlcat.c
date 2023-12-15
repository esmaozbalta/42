
#include "libft.h"


size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < dstsize && dst[i])
	{
		i++;
	}
	while ((i + j + 1) < dstsize && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != dstsize)
	{
		dst[i + j] = '\0';
	}
	j = 0;
	//while (src[j])
	//	j++;

	return (i + ft_strlen(src));
}

int				main(void)
{
	char			dest[50] = "sefsfesa";
	char			src[50] = "por";
	unsigned int	size;

	size = 12;
	printf("%lu\n", ft_strlcat(dest, src, size));
//	printf("%d\n", ft_strlcat(dest, src, size));
	printf("dest: %s\nsrc: %s\n", dest, src);
}

/*
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t s;
	size_t d;
	size_t di;
	size_t i;

	//si = ft_strlen(src);
	i = 0;
	while (src[i])
		i++;

	if (!dst && size == 0)
		return (i);

	//d = ft_strlen(dst);
	//di = d;

	d = 0;
	while (dst[d])
		d++;
	di = d;
	
	if (size <= di)
		return (size + i);

	s = 0;
	while (src[s] && d + 1 < size)
	{
		dst[d] = src[s];
		s++;
		d++;
	}
	dst[d] = 0;
	return (di + i);
}*/
