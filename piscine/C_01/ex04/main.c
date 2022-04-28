#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int	main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 1;
	y = 2;
	scanf("%d", &x);
	scanf("%d", &y);
	ft_ultimate_div_mod(&x, &y);
	printf("div %d mod %d", x, y);
	return (0);
}
