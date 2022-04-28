#include "ft_range.c"
#include <stdio.h>
#include <string.h>

int main(void)
{
	int	min;
	int	max;
	int	len;
	int	*arr= NULL;
	int	i;

	scanf("%d %d", &min, &max);
	len = max - min;
	arr = ft_range(min, max);
	i = 0;
	printf("ft_range\n");
	while (i < len)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}