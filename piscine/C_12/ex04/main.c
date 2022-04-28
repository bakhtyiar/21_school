#include <stdio.h>
#include "includes/ft_list.h"
#include "includes/ft_create_elem.h"
#include "ft_list_push_back.c"

int	main(void)
{
	t_list	elem1;
	t_list	elem2;
	t_list	elem3;
	t_list	*begin;

	elem1 = ft_create_elem("1 elem\n");
	elem2 = ft_create_elem("2 elem\n");
	elem3 = ft_create_elem("3 elem\n");
	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	printf("START\n");
	ft_list_push_back(&begin, "CHOP");
	printf("Result %s", elem3.next->data);
}