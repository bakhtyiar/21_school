#include <stdio.h>
#include "ft_is_prime.c"

int main(void)
{
	int	x;

	x = 0;
	scanf("%d", &x);
	printf("Num %d is_prime(result) %d\n", x, ft_is_prime(x));
	return (0);
}