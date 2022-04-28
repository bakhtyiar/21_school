#include "unistd.h"
#include "stdio.h"
#include "ft_advanced_sort_string_tab.c"
#include "includes/ft_strcmp.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_advanced_sort_string_tab(argv, ft_strcmp);
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
