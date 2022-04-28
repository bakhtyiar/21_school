#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*out;

	out = malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		out[i] = (*f)(tab[i]);
		i++;
	}
	return (out);
}
