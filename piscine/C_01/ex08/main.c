#include <stdio.h>
#include <unistd.h>
#include "ft_sort_int_tab.c"

int	main(void)
{
	int		x[10] = {-333, 111, 999, -111, -888, 888, -777, 333, 555, 000};
	int		a;
	int		i;

	a = 10;
	i = 0;
	printf("Number = %d\n", a);
	while (i < a)
	{
		printf("%d ", x[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(x, a);
	printf("\n");
	i = 0;
	while (i < a)
	{
		printf("%d ", x[i]);
		i++;
	}
	return (0);
}
