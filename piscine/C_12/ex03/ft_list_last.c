#include "includes/ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*begin;

	begin = begin_list;
	while (begin->next)
	{
		begin = begin->next;
	}
	return (begin);
}
