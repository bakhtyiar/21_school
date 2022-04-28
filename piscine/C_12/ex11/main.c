#include <stdio.h>
#include "includes/ft_list.h"
#include "includes/ft_create_elem.h"
#include "ft_list_find.c"

int	main(void)
{
	t_list	el1;
	t_list	el2;
	t_list	el3;
	t_list	el4;
	t_list	*begin_list;
	int (*f)(void *);

	el1 = ft_create_elem("1");
	el2 = ft_create_elem("2");
	el3 = ft_create_elem("3");
	el4 = ft_create_elem("4");
	el1.next = &el2;
	el2.next = &el3;
	el3.next = &el4;
	begin_list = &el1;

	while(begin_list)
	{
		printf("Element data: %s\n", begin_list->data);
		begin_list = begin_list->next;
	}
}