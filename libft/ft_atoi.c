
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	unsigned long int	result; //?

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while (str[i] && str[i] <= '9' && str[i] >= '0')
	{
		result *= 10;
		result += (str[i] - 48);
		i++;
	}
	return (result * sign);
}
int main(void)
{
	char s[55] = "  -7b67";
	printf("%d\n", ft_atoi(s));
	printf("%d", atoi(s));
}