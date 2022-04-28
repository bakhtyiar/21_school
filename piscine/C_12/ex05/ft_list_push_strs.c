#include "includes/ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*current;
	t_list	*previous;
	int		i;

	i = 0;
	current = NULL;
	previous = NULL;
	while (i < size)
	{
		current = ft_create_elem(strs[i]);
		current->next = previous;
		previous = current;
		i++;
	}
	return (current);
}
