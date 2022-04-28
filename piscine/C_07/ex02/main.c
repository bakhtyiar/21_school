#include "ft_ultimate_range.c"
#include <stdio.h>
#include <string.h>

int main(void)
{
	int	min;
	int	max;
	int	len;
	int	*arr = { 0 };
	int	i;
	int	result;

	scanf("%d %d", &min, &max);
	len = max - min;
	printf("ft_ultimate_range\n");
	result = ft_ultimate_range(&arr, min, max);
	printf("Result = %d\n", result);
	i = 0;
	while (i < len)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}