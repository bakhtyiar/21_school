#include "../includes/ft.h"
#include <stdlib.h>

int	**ft_map_converter(char *str, t_map_params *params)
{
	int	j;
	int	k;
	int	**map;

	j = 0;
	k = 0;
	map = (int **)malloc(sizeof(*map) * params->lines);
	map[j] = (int *)malloc(sizeof(**map) * params->columns);
	if (!map || !(map[j]))
		return (0);
	while (*str != '\0')
	{
		if (*str == '\n')
		{
			map[++j] = (int *)malloc(sizeof(**map) * params->columns);
			if (((k != params->columns - 1) || !(map[j])))
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
	else
		return (map);
}
