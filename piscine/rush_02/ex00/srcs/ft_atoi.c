
int	ft_shift_wspace(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' '
		|| str[i] == '\t'
		|| str[i] == '\n'
		|| str[i] == '\v'
		|| str[i] == '\f'
		|| str[i] == '\r')
	{
		i++;
	}
	if (i == 0)
		return (0);
	return (i);
}

int	ft_operator(char *str)
{
	int	i;
	int	operator;

	i = 0;
	operator = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			operator *= -1;
		}
		i++;
	}
	return (operator);
}

int	ft_shift_plus_minus(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int		i;
	int		result;
	int		operator;
	int		is_num;

	i = 0;
	is_num = 0;
	i += ft_shift_wspace(str + i);
	operator = ft_operator(str + i);
	i += ft_shift_plus_minus(str + i);
	result = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		is_num = 1;
		i++;
	}
	if (!is_num)
		return ('\0');
	result *= operator;
	return (result);
}
