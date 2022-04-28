#include <stdio.h>
#include "ft_strlen.c"

int main(void)
{
	char str[128] = "   aaa   ";

	//scanf( "%s", str);
	printf("%d\n", ft_strlen(str));
}