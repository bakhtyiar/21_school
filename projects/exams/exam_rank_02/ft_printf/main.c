#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int a = 0;
	int b = 0;

	a = ft_printf("%s", NULL);
	printf("\n");
	b = printf("%s", NULL);
	printf("\n");
	printf("%d\n", a - b);
	printf("\n");

	return (0);
}