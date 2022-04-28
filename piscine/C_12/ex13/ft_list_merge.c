#include "includes/ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*last1;

	if (begin_list1 == 0 || begin_list2 == 0)
		*begin_list1 = begin_list2;
	last1 = *begin_list1;
	while (last1->next)
		last1 = last1->next;
	last1->next = begin_list2;
}
