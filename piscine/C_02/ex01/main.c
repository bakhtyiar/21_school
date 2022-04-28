#include <string.h>
#include <stdio.h>
#include "ft_strncpy.c"

int	main(void)
{
	char			str[10] = "123456789";
	char			outA[20];
	char 			outB[20];
	unsigned int	size;

	size = 20;
	strncpy(outA, str, size);
	ft_strncpy(outB, str, size);
	printf("str\t%s\n", str);
	printf("outA\t%s\n", outA);
	printf("outB\t%s\n", outB);
}