#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "ft_str_is_printable.c"

int	main(void)
{
	char	str[10] = "123";
	int 	log;

	log =  ft_str_is_printable(str);
	printf("Result\t%d\n", log);
	printf("isprint() %d\n", isprint(65));
}