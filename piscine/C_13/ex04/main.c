#include <stdio.h>
#include "includes/btree_create_node.h"
#include "btree_insert_data.c"
#include "includes/btree_apply_prefix.c"

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

	printf("Tansformed\n");
	i = 1;
}
