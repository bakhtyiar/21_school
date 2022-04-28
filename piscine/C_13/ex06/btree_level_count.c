#include "ft_btree.h"

int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int	btree_level_count(t_btree *root)
{
	int	l;
	int	r;

	if (root == NULL)
		return (0);
	l = btree_level_count(root->left);
	r = btree_level_count(root->right);
	return (1 + ft_max(l, r));
}
