#include "includes/ft.h"
#include <fcntl.h>
#include <stdlib.h>

int	ft_free_map(int **map, t_map_params params)
{
	int	i;

	i = -1;
	while (++i < params.lines)
	{
		free(map[i]);
	}
	free(map);
	return (1);
}

void	ft_map_display_cycle_part(int **map, t_map_params *params, char	*str)
{
	int	i;
	int	k;
	int	j;

	i = -1;
	while (++i < params->lines)
	{
		k = 0;
		j = -1;
		while (++j < params->columns - 1)
		{
			if (map[i][j] == -1)
				str[k++] = params->fill;
			else if (map[i][j] == 0)
				str[k++] = params->obstacles;
			else
				str[k++] = params->empty;
		}
		str[k++] = '\n';
		str[k] = '\0';
		ft_putstr(str);
	}
}

void	ft_map_display(int **map, t_map_params *params)
{
	char	*str;

	str = malloc(sizeof(*str) * params->columns);
	if (!str)
		return ;
	ft_map_display_cycle_part(map, params, str);
}

void	ft_main_start_process(char *str, int **map,
t_map_params *params, int *fd)
{
	str = ft_read_file(*fd, params);
	if (str == 0)
	{
		ft_put_map_error();
		exit (0);
	}
	map = ft_map_converter(str, params);
	if (map == 0)
		ft_put_map_error();
	else
		ft_map_display(ft_square_calc(map, *params), params);
}

int	main(int ac, char **av)
{
	int				i;
	int				fd;
	int				**map;
	char			*str;
	t_map_params	params;

	i = 0;
	map = 0;
	str = 0;
	while (i < ac || (ac == 1 && i == 0))
	{
		if (ac-- == 1)
			fd = 0;
		else
		{
			fd = open(av[++i], O_RDONLY);
			if (fd == -1)
				ft_put_map_error();
		}
		if (fd != -1)
			ft_main_start_process(str, map, &params, &fd);
	}
	return (0);
}
