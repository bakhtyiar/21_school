#include "includes/ft_list.h"
#include "includes/ft_create_elem.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	elem;
	t_list	next_el;

	elem = *ft_create_elem(data);
	next_el = **begin_list;
	elem.next = &next_el;
	**begin_list = elem;
}
