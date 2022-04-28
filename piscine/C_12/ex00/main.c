#include <stdio.h>
#include "ft_list.h"
#include "ft_create_elem.c"

int	main(void)
{
	char	*data = "CHECH";
	t_list	elem;

	elem = *ft_create_elem(data);
	printf("%s\n", elem.data);
}