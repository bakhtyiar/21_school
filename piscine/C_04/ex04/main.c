#include <stdio.h>
#include "ft_putnbr_base.c"

int main(void)
{
	char	base[16] = "OI";
	int		nbr;

	scanf( "%d", &nbr);
	ft_putnbr_base(nbr, base);
}