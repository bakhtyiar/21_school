#include "unistd.h"
#include "stdio.h"
#include "ift_sort_string_tab.c"

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_string_tab(argv);
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
