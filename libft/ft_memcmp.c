
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t	i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
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
int main(void)
{
    const char *cp1 = "Bilg";
    const char *cp2 = "Bilgileri";
    int ret;

    ret = memcmp(cp1, cp2, 10);

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
