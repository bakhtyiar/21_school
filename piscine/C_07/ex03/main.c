#include "ft_strjoin.c"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	str1[16] = "aaa";
	char	str2[16] = "bbb";
//	char	str3[16] = "ccc";
//	char	str4[16] = "ddd";
	char	*out = NULL;
	char	**strs = malloc(3);
	char	*sep = "//";

	strs[0] = str1;
	strs[1] = str2;
//	strs[2] = str3;
//	strs[3] = str4;
	scanf("%s", str1);
	scanf("%s", str2);
//	scanf("%s", str3);
//	scanf("%s", str4);
	out = ft_strjoin(2, strs, sep);
	printf("%s", out);
	return (0);
}