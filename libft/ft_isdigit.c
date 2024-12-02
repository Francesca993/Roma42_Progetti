#include "libft.h"

int	ft_isdigit(int i)
{
	while(i >= '0' && i <='9')
			return (1);
	return(0);
}
