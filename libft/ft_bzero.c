
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int main( void )
{
    char buffer[80] = "ornek";
	printf("%s\n", buffer);
    ft_bzero( buffer, 80 );
	printf("%s sonrasi", buffer);
}*/