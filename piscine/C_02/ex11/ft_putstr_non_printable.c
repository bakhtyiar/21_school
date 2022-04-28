#include <unistd.h>

void	arr_reverse(char *str)
{
	char	buf[1024];
	int		i;
	int		j;
	int		size;

	i = 0;
	while (str[i] != '\0')
	{
		buf[i] = str[i];
		i++;
	}
	size = i;
	j = 0;
	while (j < size)
	{
		str[j] = buf[i];
		j++;
		i--;
	}
}

int	is_printable(char *str)
{
	int	i;

	if (*str == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || 126 < str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	decimal_to_hexadecimal(char *str)
{
	int		quotient;
	int		remainder;
	int		i;
	int		j;
	char	hex_num[128];

	quotient = *str;
	j = 0;
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
		{
			hex_num[j] = 48 + remainder;
			j++;
		}
		else
		{
			hex_num[j] = 55 + remainder;
			j++;
		}
		quotient = quotient / 16;
	}
	arr_reverse(hex_num);
	*str = *hex_num;
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_printable(str + i))
		{
			decimal_to_hexadecimal(str + i);
		}
		i++;
	}
	write(1, str, i);
}
