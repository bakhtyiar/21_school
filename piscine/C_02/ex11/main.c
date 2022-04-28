#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "ft_putstr_non_printable.c"

int	main(void)
{
	char	str[10] = {'a','b','\n','c','\0'};

	ft_putstr_non_printable(str);
	printf("%s\n", str);
}