#include "libft.h"

int ft_atoi(const char *str)
{
	{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == 32 || (*str >= 7 && *str <= 13))
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
}