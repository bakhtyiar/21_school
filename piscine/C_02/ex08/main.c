#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "ft_strlowcase.c"

int	main(void)
{
	char	str[128] = "abcdef123ABCDEF";

	ft_strupcase(str);
	printf("%s\n", str);
}