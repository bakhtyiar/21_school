#include "../includes/ft.h"
#include <stdlib.h>

int	ft_map_converter_cycle_part(char *str, t_map_params *params, int **map)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (*str != '\0')
	{
		if (*str == '\n')
		{
			map[++j] = (int *)malloc(sizeof(**map) * params->columns);
			if ((k != params->columns - 1) || map[j] == 0)
				return (0);
			k = 0;
		}
		if (*str == params->empty)
			map[j][k++] = -1;
		if (*str++ == params->obstacles)
			map[j][k++] = 0;
	}
	if (j != params->lines - 1)
		return (0);
	return (1);
}

int	**ft_map_converter(char *str, t_map_params *params)
{
	int	**map;

	map = (int **)malloc(sizeof(*map) * params->lines);
	map[0] = (int *)malloc(sizeof(**map) * params->columns);
	if (map == 0 || map[0] == 0)
		return (0);
	if (ft_map_converter_cycle_part(str, params, map) == 0)
		return (0);
	free (str);
	return (map);
}
