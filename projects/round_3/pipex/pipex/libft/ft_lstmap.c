/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:43:34 by gnameles          #+#    #+#             */
/*   Updated: 2021/10/27 12:43:35 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstmap_cycle(t_list *lst, void *(*f)(void *),
				void (*del)(void *), t_list	*new_lst, t_list	*new_elem)
{
	while (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&new_lst, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&new_lst, new_elem);
	}
	return (new_lst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	if (!lst || !f)
		return (NULL);
	new_elem = ft_lstnew(f(lst->content));
	if (!new_elem)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	new_lst = new_elem;
	lst = lst->next;
	new_lst = ft_lstmap_cycle(lst, f, del, new_lst, new_elem);
	return (new_lst);
}
