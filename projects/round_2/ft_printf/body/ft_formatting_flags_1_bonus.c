/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatting_flags_1_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:29:46 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/20 15:29:49 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	ft_minus_flag(t_format *f_props, size_t *len, char *temp)
{
	if (f_props->conv_flags->flag_align == TRUE)
		ft_memcpy(temp, f_props->formatted_src, *len);
	else
	{
		ft_strlcpy(temp + f_props->conv_flags->min_width - *len,
			f_props->formatted_src, *len + 1);
	}
}

static void	ft_zero_flag(t_format *f_props,
				size_t *len, t_bool is_neg, char *temp)
{
	char	*flag_temp;

	if (f_props->conv_flags->flag_0 == TRUE
		&& f_props->conv_flags->flag_align == FALSE
		&& f_props->conv_flags->flag_pointer == 0)
	{
		ft_memset(temp, '0', f_props->conv_flags->min_width);
		if (TRUE == is_neg)
		{
			temp[0] = '-';
			is_neg = FALSE;
		}
	}
	else
	{
		if (TRUE == is_neg)
		{
			flag_temp = ft_strjoin("-", f_props->formatted_src);
			free(f_props->formatted_src);
			f_props->formatted_src = flag_temp;
			*len = *len + 1;
			is_neg = FALSE;
		}
		ft_memset(temp, ' ', f_props->conv_flags->min_width);
	}
}

void	ft_min_width_flag(t_format *f_props, size_t *len, t_bool is_neg)
{
	char	*temp;

	if (f_props->conv_flags->min_width > (int)(*len))
	{
		temp = malloc((f_props->conv_flags->min_width + 1) * sizeof(char));
		temp[f_props->conv_flags->min_width] = 0;
		ft_zero_flag(f_props, len, is_neg, temp);
		ft_minus_flag(f_props, len, temp);
		free(f_props->formatted_src);
		f_props->formatted_src = temp;
		*len = f_props->conv_flags->min_width;
	}
	else if (TRUE == is_neg)
	{
		temp = ft_strjoin("-", f_props->formatted_src);
		free(f_props->formatted_src);
		f_props->formatted_src = temp;
		*len = *len + 1;
	}
}
