#include <stdio.h>
#include "ft_find_next_prime.c"

int main(void)
{
	int	x;

	x = 0;
	scanf("%d", &x);
	printf("Num %d next prime(result) %d\n", x, ft_find_next_prime(x));
	return (0);
}