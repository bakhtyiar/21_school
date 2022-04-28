/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatting_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:29:41 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/20 15:29:43 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_formatting(t_format *f_props)
{
	if (f_props->conv_flags->conversion == 's')
		return (ft_get_string(f_props));
	else if (f_props->conv_flags->conversion == 'c')
		return (ft_get_char(f_props));
	else if (f_props->conv_flags->conversion == 'p')
		return (ft_get_address(f_props));
	else if (f_props->conv_flags->conversion == 'd'
		|| f_props->conv_flags->conversion == 'i')
		return (ft_get_i_d(f_props));
	else if (f_props->conv_flags->conversion == 'u')
		return (ft_get_u_x(f_props, "0123456789"));
	else if (f_props->conv_flags->conversion == 'x')
		return (ft_get_u_x(f_props, "0123456789abcdef"));
	else if (f_props->conv_flags->conversion == 'X')
		return (ft_get_u_x(f_props, "0123456789ABCDEF"));
	else if (f_props->conv_flags->conversion == '%')
		return (ft_get_percent(f_props));
}
