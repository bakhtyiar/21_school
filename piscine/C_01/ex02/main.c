#include <stdio.h>
#include "ft_swap.c"

int	main(void)
{
	int	x;
	int	y;

	x = 1;
	y = 2;
	scanf("%d", &x);
	scanf("%d", &y);
	ft_swap(&x, &y);
	printf("%d %d", x, y);
	return (0);
}
