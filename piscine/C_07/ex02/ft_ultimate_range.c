#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;
	int	len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	i = 0;
	arr = malloc(max - min);
	if (arr == NULL)
		return (-1);
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (len);
}
