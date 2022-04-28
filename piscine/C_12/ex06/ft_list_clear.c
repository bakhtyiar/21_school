#include "includes/ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*previous;

	current = begin_list;
	while (current)
	{
		free_fct(current->data);
		previous = current;
		current = current->next;
		free(previous);
	}
}
