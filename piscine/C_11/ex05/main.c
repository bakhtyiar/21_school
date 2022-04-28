#include "unistd.h"
#include "includes/ft_atoi.h"
#include "includes/ft_putnbr.h"
#include "includes/ft_strlen.h"
#include "includes/ft.h"
#include "includes/ft_is_operator.h"
#include "includes/ft_act_operator.h"

int	main(int argc, char **argv)
{
	int		num1;
	int		num2;
	char	operator;

	if (argc != 4)
		return (0);
	num1 = ft_atoi(argv[1]);
	num2 = ft_atoi(argv[3]);
	operator = argv[2][0];
	if (!ft_is_operator(argv[2]))
	{
		write(1, "0\n", 2);
		return (0);
	}
	ft_act_operator(num1, operator, num2);
	return (0);
}
