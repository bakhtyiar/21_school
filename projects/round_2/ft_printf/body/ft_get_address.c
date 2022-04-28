/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_address.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:53:49 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/17 16:53:51 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_address(t_format *f_props)
{
	size_t	len;
	char	*temp;

	f_props->formatted_src = ft_itoa_base(
			va_arg(f_props->args_c, size_t), "0123456789abcdef");
	if (NULL == f_props->formatted_src)
		f_props->formatted_src = ft_strdup("0");
	temp = ft_strjoin("0x", f_props->formatted_src);
	free(f_props->formatted_src);
	f_props->formatted_src = temp;
	len = ft_strlen(f_props->formatted_src);
	ft_min_width_flag(f_props, &len, FALSE);
	f_props->len += len;
	f_props->len_formatted = len;
}
