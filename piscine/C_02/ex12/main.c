#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "ft_print_memory.c"

int	main(void)
{
	char	str[10] = {'a','b','\n','c','\0'};

	ft_print_memory(str, 10);
	printf("%s\n", str);
}