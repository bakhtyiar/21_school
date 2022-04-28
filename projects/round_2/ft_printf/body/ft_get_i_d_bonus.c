/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_i_d_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:29:59 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/20 15:30:01 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	ft_negative_sign(t_format *f_props, t_bool *is_neg, size_t *len)
{
	char	*temp;

	temp = NULL;
	if (*is_neg == FALSE && f_props->formatted_src[0] == '-')
	{
		*is_neg = TRUE;
		temp = ft_strdup(&f_props->formatted_src[1]);
		free(f_props->formatted_src);
		f_props->formatted_src = temp;
	}
	else if (*is_neg == TRUE)
	{
		temp = ft_strjoin("-", f_props->formatted_src);
		free(f_props->formatted_src);
		f_props->formatted_src = temp;
		*len = *len + 1;
	}
}

void	ft_get_i_d(t_format *f_props)
{
	size_t	len;
	t_bool	is_neg;

	f_props->formatted_src = ft_itoa(va_arg(f_props->args_c, int));
	is_neg = FALSE;
	ft_negative_sign(f_props, &is_neg, &len);
	if (NULL == f_props->formatted_src)
	{
		free(f_props->formatted_src);
		f_props->formatted_src = ft_strdup("(null)");
	}
	len = ft_strlen(f_props->formatted_src);
	ft_pointer_flag(f_props, &len);
	ft_min_width_flag(f_props, &len, is_neg);
	ft_space_flag(f_props, &len);
	ft_plus_flag(f_props, &len);
	f_props->len += len;
	f_props->len_formatted = len;
}
