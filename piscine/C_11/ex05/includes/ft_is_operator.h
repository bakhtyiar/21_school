#include "ft_strlen.h"

#ifndef FT_IS_OPERATOR_H
# define FT_IS_OPERATOR_H
int	ft_is_operator(char *argv)
{
	int		operator;
	int		len;

	len = ft_strlen(argv);
	operator = *argv;
	if (len > 1)
		return (0);
	if (operator != '+' && operator != '-'
		&& operator != '*' && operator != '/'
		&& operator != '%')
	{
		return (0);
	}
	return (1);
}
#endif