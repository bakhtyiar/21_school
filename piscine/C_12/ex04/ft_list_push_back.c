#include "includes/ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	elem;
	t_list	*begin;

	begin = *begin_list;
	while (begin->next)
	{
		begin = begin->next;
	}
	elem = *ft_create_elem(data);
	begin->next = &elem;
}
