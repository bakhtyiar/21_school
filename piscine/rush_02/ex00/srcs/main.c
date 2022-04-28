#include "ft.h"
#include <unistd.h>
/*
*	Мэйн программы
*
*/
int	main(int argc, char **argv)
{
	int		fd;
	char	*dictionary;

	fd = 0;
	dictionary = 0;
	if (argc > 3)
		write(1, "Too many arguments\n", 19);
	else if (argc == 2)
	{
		ft_init(argv[1], dictionary);
	}
	else if (argc == 3)
	{
		ft_alt_init(argv[2], dictionary);
	}
	else
		write(1, "Incorrect amount of arguments\n", 30);
	return (0);
}
