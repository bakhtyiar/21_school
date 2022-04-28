/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:53:17 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/17 16:53:19 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_string(t_format *f_props)
{
	size_t	len;
	char	*temp;

	temp = va_arg(f_props->args_c, char *);
	if (NULL == temp)
		f_props->formatted_src = ft_strdup("(null)");
	else
		f_props->formatted_src = ft_strdup(temp);
	len = ft_strlen(f_props->formatted_src);
	ft_pointer_flag(f_props, &len);
	ft_min_width_flag(f_props, &len, FALSE);
	f_props->len += len;
	f_props->len_formatted = len;
}
