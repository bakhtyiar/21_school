#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	len;

	if (min >= max)
		return (NULL);
	len = max - min;
	i = 0;
	arr = malloc(max - min);
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
