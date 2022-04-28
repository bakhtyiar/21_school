#include <stdio.h>
#include "ft_map.c"

int	ft_inc_nbr(int	a) {
	a++;
	return (a);
}

int	main(void)
{
	int	arr[15] = {0,1,2,3,4,5,6,7,8,9,10,11, 0};
	int	*out;
	int	i = 0;

	out = ft_map(arr, 15, &ft_inc_nbr);
	while (out[i])
	{
		printf("%d || ", out[i]);
		i++;
	}
	return (0);
}