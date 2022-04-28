#include <string.h>
#include <stdio.h>
#include "ft_str_is_lowercase.c"

int	main(void)
{
	char	str[10] = "aaa";
	int 	log;

	log = ft_str_is_lowercase(str);
	printf("Result\t%d\n", log);
}