#include "../../includes/ft.h"

int	ft_atoi(char *str)
{
	int		i;
	int		result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' && ('0' <= str[i + 1] && str[i + 1] <= '9'))
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+' && ('0' <= str[i + 1] && str[i + 1] <= '9'))
		i++;
	if (!('0' <= str[i] && str[i] <= '9'))
		return (0);
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
