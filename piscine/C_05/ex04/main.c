#include <stdio.h>
#include "ft_fibonacci.c"

int main(void)
{
	int	x;

	x = 0;
	scanf("%d", &x);
	printf("Num %d = %d\n", x, ft_fibonacci(x));
	return (0);
}