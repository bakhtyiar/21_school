#include "ft_list.h"
#include <stdlib.h>

#ifndef FT_CREATE_ELEM_H
# define FT_CREATE_ELEM_H
t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = NULL;
	elem = malloc(sizeof(t_list));
	if (elem)
	{
		elem->next = NULL;
		elem->data = data;
	}
	return (elem);
}
#endif