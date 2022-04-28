/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_f_props_cycle_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:29:28 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/20 15:29:33 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

t_format	*ft_start_struct(va_list args)
{
	t_format		*f_props;
	t_convert_flags	*conv_flags;

	f_props = malloc(1 * sizeof(t_format));
	conv_flags = malloc(1 * sizeof(t_convert_flags));
	f_props->len = 0;
	f_props ->formatted_src = NULL;
	va_copy(f_props->args_c, args);
	conv_flags->conversion = '\0';
	conv_flags->flag_0 = FALSE;
	conv_flags->flag_align = FALSE;
	conv_flags->flag_hashtag = FALSE;
	conv_flags->flag_plus = FALSE;
	conv_flags->flag_space = FALSE;
	conv_flags->flag_pointer = 0;
	conv_flags->min_width = 0;
	f_props->conv_flags = conv_flags;
	return (f_props);
}

void	ft_reset_struct(t_format *f_props)
{
	free(f_props->formatted_src);
	f_props->formatted_src = NULL;
	f_props->conv_flags->conversion = '\0';
	f_props->conv_flags->flag_0 = FALSE;
	f_props->conv_flags->flag_align = FALSE;
	f_props->conv_flags->flag_hashtag = FALSE;
	f_props->conv_flags->flag_plus = FALSE;
	f_props->conv_flags->flag_space = FALSE;
	f_props->conv_flags->flag_pointer = 0;
	f_props->conv_flags->min_width = 0;
}

int	ft_end_struct(t_format *f_props)
{
	int	len;

	len = f_props->len;
	va_end(f_props->args_c);
	free(f_props->conv_flags);
	f_props->conv_flags = NULL;
	free(f_props);
	return (len);
}
