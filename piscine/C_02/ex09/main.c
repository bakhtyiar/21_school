#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "ft_strcapitalize.c"

int	main(void)
{
	char	str[256] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s\n", str);
}