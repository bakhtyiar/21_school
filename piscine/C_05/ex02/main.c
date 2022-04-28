#include <stdio.h>
#include "ft_iterative_power.c"

int main(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	scanf("%d", &x);
	scanf("%d", &y);
	printf("Num %d Power %d = %d\n", x, y, ft_iterative_power(x, y));
	return (0);
}