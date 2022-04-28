#include <stdio.h>
#include <unistd.h>
#include "ft_strlen.c"

int	main(void)
{
	char	x[4] = "1234";
	int		a;

	//read(1, x, 128);
	a = ft_strlen(x);
	printf("%d", a);
	return (0);
}
