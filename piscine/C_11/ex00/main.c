#include <stdio.h>
#include "ft_foreach.c"

void ft_putnbr(int	a) {
	a = a * 2;
	printf("%d\n", a);
}

int	main(void)
{
	int	arr[15] = {0,1,2,3,4,5,6,7,8,9,10,11, 0};

	ft_foreach(arr, 15, &ft_putnbr);
	return (0);
}