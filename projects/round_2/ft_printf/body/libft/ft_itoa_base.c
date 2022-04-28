/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:35:24 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/15 11:35:26 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_loop(int size, size_t number, char *base, char *res)
{
	char	*tmp;
	char	next_value[2];

	next_value[1] = 0;
	if (number >= (size_t)size)
	{
		res = ft_loop(size, number / size, base, res);
	}
	next_value[0] = base[number % size];
	tmp = ft_strjoin(res, next_value);
	free(res);
	res = tmp;
	tmp = NULL;
	return (res);
}

char	*ft_itoa_base(size_t number, char *base)
{
	int		base_size;
	char	*res;

	if (!number)
		return (NULL);
	base_size = ft_strlen(base);
	if (base_size < 2)
		return (NULL);
	res = ft_strdup("");
	res = ft_loop(base_size, number, base, res);
	return (res);
}
