#include "ft.h"

int	ft_valid_input(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] < '0' && '9' < argv[i])
			return (0);
		i++;
	}
	return (1);
}
