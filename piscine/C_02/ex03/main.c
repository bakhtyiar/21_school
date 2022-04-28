#include <string.h>
#include <stdio.h>
#include "ft_str_is_numeric.c"

int	main(void)
{
	char			str[10] = "12345678";

	ft_str_is_numeric(str);
	printf("Result\t%d\n", ft_str_is_numeric(str));
}