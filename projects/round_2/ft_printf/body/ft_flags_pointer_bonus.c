/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_pointer_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:29:37 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/20 15:29:40 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	ft_string_pointer(t_format *f_props, size_t *len)
{
	if (f_props->conv_flags->flag_pointer < (int)(*len)
		&& f_props->conv_flags->flag_pointer
		!= 0 && f_props->formatted_src[0] != 0)
	{
		f_props->formatted_src[f_props->conv_flags->flag_pointer] = 0;
		*len = f_props->conv_flags->flag_pointer;
	}
}

static void	ft_other_pointer(t_format *f_props, size_t *len)
{
	char	*temp;

	if (f_props->conv_flags->flag_pointer
		> (int)(*len) && f_props->formatted_src[0] != 0)
	{
		temp = malloc((f_props->conv_flags->flag_pointer + 1) * sizeof(char));
		ft_memset(temp, '0', f_props->conv_flags->flag_pointer);
		temp[f_props->conv_flags->flag_pointer] = 0;
		ft_memcpy(&temp[f_props->conv_flags->flag_pointer - *len],
			f_props->formatted_src, *len);
		free(f_props->formatted_src);
		f_props->formatted_src = temp;
		*len = f_props->conv_flags->flag_pointer;
	}
}

void	ft_pointer_flag(t_format *f_props, size_t *len)
{
	if (f_props->conv_flags->flag_pointer <= -1
		&& (*f_props->formatted_src == '0'
			|| f_props->conv_flags->conversion == 's'))
	{
		f_props->formatted_src[0] = 0;
		*len = 0;
	}
	else if (f_props->conv_flags->conversion == 's')
		ft_string_pointer(f_props, len);
	else if (f_props->conv_flags->conversion == 'd'
		|| f_props->conv_flags->conversion == 'i'
		|| f_props->conv_flags->conversion == 'u'
		|| f_props->conv_flags->conversion == 'x'
		|| f_props->conv_flags->conversion == 'X')
		ft_other_pointer(f_props, len);
}
