#include <stdio.h>
#include "includes/btree_create_node.h"
#include "btree_apply_suffix.c"

int	main(int argc, char **argv)
{
	t_btree	*arr;
	int		i;

	arr = malloc(sizeof(t_btree) * argc);
	i = 1;
	while (i < argc)
	{
		arr[i] = *btree_create_node(argv[i]);
		printf("%s\n", arr[i].item);
		i++;
	}
	arr[1].left = &arr[2];
	arr[1].right = &arr[3];
	printf("Tansformed\n");
	i = 1;
	while (i < argc)
		printf("%s\n", arr[i++].item);
}
