/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_formatting2.c                                 :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:25:45 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/15 15:25:49 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_plus_flag(t_format *f_props, size_t *len)
{
	char	*temp;

	if (f_props->conv_flags->flag_plus == TRUE)
	{
		if (*f_props->formatted_src == '-')
			return ;
		temp = ft_strjoin("+", f_props->formatted_src);
		free(f_props->formatted_src);
		f_props->formatted_src = temp;
		*len = *len + 1;
	}
}

void	ft_space_flag(t_format *f_props, size_t *len)
{
	char	*temp;

	if (f_props->conv_flags->flag_space == TRUE
		&& f_props->conv_flags->flag_plus == FALSE)
	{
		if (*f_props->formatted_src == '-')
			return ;
		temp = ft_strjoin(" ", f_props->formatted_src);
		free(f_props->formatted_src);
		f_props->formatted_src = temp;
		*len = *len + 1;
	}
}

void	ft_hashtag_flag(t_format *f_props, size_t *len)
{
	char	*temp;

	if (f_props->conv_flags->flag_hashtag == TRUE && !(*len == 1
			&& *f_props->formatted_src == '0'))
	{
		if (f_props->conv_flags->conversion == 'p'
			|| f_props->conv_flags->conversion == 'x')
		{
			temp = ft_strjoin("0x", f_props->formatted_src);
			free(f_props->formatted_src);
			f_props->formatted_src = temp;
			*len += 2;
		}
		else if (f_props->conv_flags->conversion == 'X')
		{
			temp = ft_strjoin("0X", f_props->formatted_src);
			free(f_props->formatted_src);
			f_props->formatted_src = temp;
			*len += 2;
		}
	}
}
