#include <stdio.h>
#include <unistd.h>
#include "ft_putstr.c"

int	main(void)
{
	char	*x[128];
	char	*lastC[1];

	read(1, x, 128);
	ft_putstr(x);
	return (0);
}
