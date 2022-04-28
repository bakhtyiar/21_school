/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:29:20 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/20 15:29:23 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_new_errors(t_format *f_props, int type)
{
	if (type == 1)
	{
		f_props->len = f_props->len + 1;
		write(1, "%", 1);
		return (1);
	}
	else if (type == 2)
	{
		write(1, "", 1);
		return (1);
	}
	return (1);
}
