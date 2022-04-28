#include "ft_strs_to_tab.c"
#include "ft_stock_str.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	struct s_stock_str *arr = malloc(sizeof(struct s_stock_str) * argc);

	i = 1;
	arr = ft_strs_to_tab(argc, argv);
	while (i < argc)
	{
		printf("size = %d\t", arr[i].size);
		printf("str = %s\t", arr[i].str);
		printf("copy = %s\t", arr[i].copy);
		printf("\n");
		i++;
	}
}