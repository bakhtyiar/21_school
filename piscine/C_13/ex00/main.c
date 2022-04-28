#include <stdio.h>
#include "btree_create_node.c"

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
}