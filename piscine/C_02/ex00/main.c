#include <string.h>
#include <stdio.h>
#include "ft_strcpy.c"

int	main(void)
{
	char	str[7] = "Hello!";
	char	outA[7];
	char 	outB[7];

	strcpy(outA, str);
	ft_strcpy(outB, str);
	printf("%s\n", outA);
	printf("%s\n", outB);
}