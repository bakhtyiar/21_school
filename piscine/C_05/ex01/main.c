#include <stdio.h>
#include "ft_recursive_factorial.c"

int main(void)
{
	int	x;

	x = 0;
	scanf("%d", &x);
	printf("Factorial of %d is %d\n", x, ft_recursive_factorial(x));
	return (0);
}