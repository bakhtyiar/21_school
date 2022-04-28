/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 10:59:28 by gnameles          #+#    #+#             */
/*   Updated: 2021/06/24 16:53:46 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_swap_asc(int *a, int *b)
{
	int	temp;

	if (*a < *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
	return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size - 1)
	{
		while (j < size - i)
		{
			ft_swap_asc(&tab[j], &tab[j - 1]);
			j++;
		}
		j = 1;
		i++;
	}
}
