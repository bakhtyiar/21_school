/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:53:52 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/17 16:53:53 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_char(t_format *f_props)
{
	size_t	len;

	f_props->formatted_src = malloc(2 * sizeof(char));
	f_props->formatted_src[0] = va_arg(f_props->args_c, unsigned int);
	f_props->formatted_src[1] = 0;
	len = 1;
	ft_min_width_flag(f_props, &len, FALSE);
	f_props->len += len;
	f_props->len_formatted = len;
}
