#include "ft_strdup.c"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[256] = "hello 42";

	printf("sting\t%s\n", str1);
	printf("orig\t%s\n", strdup(str1));
	printf("ft\t%s\n", ft_strdup(str1));
	return (0);
}