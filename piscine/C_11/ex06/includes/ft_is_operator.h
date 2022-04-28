#ifndef FT_IS_OPERATOR_H
# define FT_IS_OPERATOR_H
int	ft_is_operator(char *argv)
{
	int		operator;

	operator = *argv;
	if (operator != '+' && operator != '-'
		&& operator != '*' && operator != '/'
		&& operator != '%')
	{
		return (0);
	}
	return (1);
}
#endif