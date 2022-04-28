#include <stdio.h>
#include "ft_div_mod.c"

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
	ft_div_mod(x, y, &div, &mod);
	printf("%d / %d = %d (%d)", x, y, div, mod);
	return (0);
}
