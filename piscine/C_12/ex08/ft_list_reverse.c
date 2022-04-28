void	ft_list_reverse(t_list **begin_list)
{
	t_list	*last;
	t_list	*current;
	t_list	*previous;

	last = *begin_list;
	while (last->next)
		last = last->next;
	current = last;
	while ((*begin_list)->next)
	{
		previous = *begin_list;
		while (previous->next != current)
			previous = previous->next;
		previous->next = NULL;
		current->next = previous;
		current = previous;
	}
	*begin_list = last;
}
