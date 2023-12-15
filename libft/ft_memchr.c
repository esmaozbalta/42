
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	chr;
	int	i;

	str = (char *)s;
	chr = (char)c;
	i = 0;
	while (i < n)
	{
		if (*str == chr)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}
int main () {
   const char str[] = "merhaabalar";
   const char ch = 'b';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}