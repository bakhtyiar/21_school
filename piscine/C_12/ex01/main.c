#include <stdio.h>
#include "includes/ft_list.h"
#include "includes/ft_create_elem.h"
#include "ft_list_push_front.c"

int	main(void)
{
	t_list	elem1;
	t_list	elem2;
	t_list	*begin;

	elem1 = *ft_create_elem("1 elem\n");
	elem2 = *ft_create_elem("2 elem\n");
	begin = &elem1;
	elem1.next = &elem2;
	printf("%s", begin->data);
	ft_list_push_front(&begin, "3 elem\n");
	printf("START\n");
	while (begin)
	{
		printf("%s", begin->data);
		printf("cycle\n");
		begin = begin->next;
	}
}