#include "includes/ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*previous;

	current = begin_list;
	previous = current;
	while (current)
	{
		if ((*cmp)(current->data, data_ref) == 0)
			(*free_fct)(current->data);
		previous = current;
		current = current->next;
		free(previous);
	}
}
