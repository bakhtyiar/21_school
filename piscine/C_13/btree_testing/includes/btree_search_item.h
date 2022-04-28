#ifndef BTREE_SEARCH_ITEM_H
# define BTREE_SEARCH_ITEM_H
# include "ft_btree.h"

void	*btree_search_item(t_btree *root, char *data_ref,
int (*cmpf)(char *, char *))
{
	void	*ptr;

	ptr = NULL;
	if (root)
	{
		if (root->left != NULL)
			ptr = btree_search_item(root->left, data_ref, cmpf);
		if (ptr == NULL && cmpf(root->item, data_ref) == 0)
			return (root->item);
		if (ptr == NULL && root->right != NULL)
			ptr = btree_search_item(root->right, data_ref, cmpf);
	}
	return (ptr);
}
#endif