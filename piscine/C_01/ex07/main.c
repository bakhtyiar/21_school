#include <stdio.h>
#include <unistd.h>
#include "ft_rev_int_tab.c"

int	main(void)
{
	int		x[10] = {-3, -2, -1, 0, 1, 2, 3, 4, 5, 6};
	int		a;
	int		i;

	a = 10;
	printf("Number = %d\n", a);
	while (i < a)
	{
		printf("%d", x[i]);
		i++;
	}
	ft_rev_int_tab(x, a);
	i = 0;
	while (i < a)
	{
		printf("%d", x[i]);
		i++;
	}
	return (0);
}
