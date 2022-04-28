#include <stdio.h>
#include "ft_atoi.c"

int main(void)
{
	int num;
	char str[128];

	scanf("%s", str);
	num = ft_atoi(str);
	printf("%d\n", num);
	printf("\"   -+-+---++-+-+141421266dfgdf99999999\" => %d\n", ft_atoi("   -+-+---++-+-+141421266dfgdf99999999"));
}