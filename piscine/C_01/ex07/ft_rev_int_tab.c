/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 10:59:28 by gnameles          #+#    #+#             */
/*   Updated: 2021/06/24 15:32:14 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	buf[4096];
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		buf[i] = tab[i];
		i++;
	}
	i--;
	j = 0;
	while (j < size)
	{
		tab[j] = buf[i];
		j++;
		i--;
	}
}
