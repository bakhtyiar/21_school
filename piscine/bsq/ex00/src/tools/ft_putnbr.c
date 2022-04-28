#include "../../includes/ft.h"

void	ft_putnbr(int nb)
{
	long	number;

	number = nb;
	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
	}
	ft_putchar('0' + number % 10);
}
