
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
