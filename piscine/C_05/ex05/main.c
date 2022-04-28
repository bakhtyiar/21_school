#include <stdio.h>
#include "ft_sqrt.c"

int main(void)
{
	int	x;

	x = 0;
	scanf("%d", &x);
	printf("Num %d Root(result) %d\n", x, ft_sqrt(x));
	return (0);
}