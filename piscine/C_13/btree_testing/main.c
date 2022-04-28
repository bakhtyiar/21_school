# include "includes/ft_btree.h"
# include "includes/btree_create_node.h"
# include "includes/btree_search_item.h"
# include "includes/btree_apply_infix.h"
# include "includes/btree_insert_data.h"
# include "includes/ft_strcmp.h"
# include <stdio.h>
# include <stdlib.h>

int	main(void)
{
	char	str;
	t_btree	*arr;
	int		i;
	int		amount;
	int		*ptr;

	arr = malloc(sizeof(t_btree) * 16);
	printf("Write smth to start\n");
	scanf("%s", &str);
	printf("Write amount of nodes\n");
	scanf("%d", &amount);
	i = 0;
	while (str && i < amount)
	{
		printf("Write data to current node\n");
		printf("%d/%d\n", i, amount);
		scanf("%s", &str);
		arr[i] = *btree_create_node(&str);
		if (i > 0)
			arr[i].left = &arr[i - 1];
		if (i > 1)
			arr[i].right = &arr[i - 2];
		i++;
	}
	printf("Nodes created\n");
	printf("Printing nodes\n");
	i = 0;
	while (i < amount)
	{
		printf("arr[i]->data %s\n", arr[i].item);
		i++;
	}
	printf("Write what str to check aviability in tree\n");
	scanf("%s", &str);
	ptr = btree_search_item(arr, &str, ft_strcmp);
	printf("Has in tree %str\n", ptr->data);
}