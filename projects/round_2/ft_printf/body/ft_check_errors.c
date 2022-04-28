/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:25:59 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/15 15:26:02 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
