#ifndef FT_ACT_OPERATOR_H
# define FT_ACT_OPERATOR_H
int	ft_act_operator_divs(int num1, char operator, int num2)
{
	int	res;

	res = 0;
	if (operator - '/' == 0)
	{
		if (num2 == 0)
		{
			write(1, "Stop : division by zero\n", 24);
			return (0);
		}
		res = num1 / num2;
	}
	else if (operator - '%' == 0)
	{
		if (num2 == 0)
		{
			write(1, "Stop : modulo by zero\n", 22);
			return (0);
		}
		else if (num1 == 0)
			res = num2;
		else
			res = num1 % num2;
	}
	return (res);
}

int	ft_act_operator(int num1, char operator, int num2)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	if (operator == '+')
		res = num1 + num2;
	else if (operator == '-')
		res = num1 - num2;
	else if (operator == '*')
	{
		res = num1 * num2;
	}
	else
		res = ft_act_operator_divs(num1, operator, num2);
	ft_putnbr(res);
	write(1, "\n", 1);
	return (0);
}
#endif