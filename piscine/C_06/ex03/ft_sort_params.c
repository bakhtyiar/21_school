#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_print_args(int n, char **argv)
{
	int	i;

	i = 1;
	while (i < n)
	{
		write(1, *(argv + i), ft_strlen(*(argv + i)));
		write(1, "\n", 1);
		i++;
	}
}

int	ft_str_asc(char **argv1, char **argv2)
{
	int		i;
	char	*temp;

	i = 0;
	while ((*argv1)[i] != '\0' && (*argv2)[i] != '\0')
	{
		if (0 < (*argv1)[i] - (*argv2)[i])
		{
			temp = *argv1;
			*argv1 = *argv2;
			*argv2 = temp;
			return (1);
		}
		else if ((*argv1)[i] - (*argv2)[i] < 0)
			return (0);
		i++;
	}
	return (0);
}

void	ft_sort_args(int n, char **argv)
{
	int		j;
	int		replaces;

	j = 2;
	replaces = 1;
	while (replaces != 0)
	{
		replaces = 0;
		j = 2;
		while (j < n)
		{
			if (ft_str_asc((argv + j - 1), (argv + j)))
			{
				replaces++;
			}
			j++;
		}
	}
}

int	main(int argc, char **argv)
{
	ft_sort_args(argc, argv);
	ft_print_args(argc, argv);
	return (0);
}
