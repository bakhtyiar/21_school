#include <stdio.h>
#include "ft_any.c"

int	ft_is_uppercase(char *a)
{
	printf("%s\n", a);
	if (a[0] == 'X')
		return (1);
	return (0);
}

int	main(void)
{
	char	*arr1 = "abcAefg";
	char	*arr2 = "XEHEH";
	char	*strs[3] = {arr1, arr2};

	printf("START\n");
	printf("%d \n", ft_any(strs, ft_is_uppercase));
	printf("END\n");
	return (0);
}