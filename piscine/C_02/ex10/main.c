#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "ft_strlcpy.c"

int	main(void)
{
	char	str[256] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char 	out[256];
	ft_strlcpy(out, str, 256);
	printf("%s\n", out);
}