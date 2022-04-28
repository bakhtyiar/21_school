#include <string.h>
#include <stdio.h>
#include "ft_str_is_uppercase.c"

int	main(void)
{
	char	str[10] = "ASA12D";
	int 	log;

	log = ft_str_is_uppercase(str);
	printf("Result\t%d\n", log);
}