/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gets_u_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:26:14 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/15 15:26:16 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_u_x(t_format *f_props, char *base)
{
	size_t	len;

	f_props->formatted_src = ft_itoa_base(
			va_arg(f_props->args_c, unsigned), base);
	if (NULL == f_props->formatted_src)
	{
		free(f_props->formatted_src);
		f_props->formatted_src = ft_strdup("0");
	}
	len = ft_strlen(f_props->formatted_src);
	ft_pointer_flag(f_props, &len);
	if (f_props->conv_flags->conversion == 'x'
		|| f_props->conv_flags->conversion == 'X')
		ft_hashtag_flag(f_props, &len);
	ft_min_width_flag(f_props, &len, FALSE);
	ft_space_flag(f_props, &len);
	ft_plus_flag(f_props, &len);
	f_props->len += len;
	f_props->len_formatted = len;
}
