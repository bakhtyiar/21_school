#ifndef BTREE_CREATE_NODE_H
# define BTREE_CREATE_NODE_H
# include <stdlib.h>
# include "ft_btree.h"
t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	node = NULL;
	node = malloc(sizeof(t_btree));
	if (node)
	{
		node->left = 0;
		node->right = 0;
		node->item = item;
	}
	return (node);
}
#endif