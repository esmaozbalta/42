
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = (char *)b;
	while (len > 0)
	{
		str[len - 1] = c;
		len--;
	}
	return (b);
}
/*
int main(void)
{
    char cdizi[] = "Bilgisayar";

    printf("cdizi bellek içeriği: %s\n", cdizi);

    ft_memset(cdizi, '*', 0);

    printf("cdizi bellek içeriği: %s", cdizi);

    return 0;
}
*/