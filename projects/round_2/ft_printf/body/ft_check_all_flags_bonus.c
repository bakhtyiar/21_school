/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_all_flags_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:29:12 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/20 15:29:18 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static int	ft_check_min_width(char *flag, t_format *f_props)
{
	int	i;

	i = 0;
	while (ft_isdigit(flag[i]))
	{
		f_props->conv_flags->min_width *= 10;
		f_props->conv_flags->min_width += flag[i] - 48;
		i++;
	}
	return (i);
}

static int	ft_check_pointers(char *flag, t_format *f_props)
{
	int	i;

	i = 1;
	while (ft_isdigit(flag[i]))
	{
		f_props->conv_flags->flag_pointer *= 10;
		f_props->conv_flags->flag_pointer += flag[i] - 48;
		i++;
	}
	if (i == 1)
		f_props->conv_flags->flag_pointer = -1;
	if (i > 1 && f_props->conv_flags->flag_pointer == 0)
		f_props->conv_flags->flag_pointer = -2;
	return (i);
}

static int	check_flags(char *flag, t_format *f_props)
{
	if (*flag == '-')
		f_props->conv_flags->flag_align = TRUE;
	else if (*flag == '0' )
		f_props->conv_flags->flag_0 = TRUE;
	else if (*flag == ' ')
		f_props->conv_flags->flag_space = TRUE;
	else if (*flag == '+')
		f_props->conv_flags->flag_plus = TRUE;
	else if (*flag == '#')
		f_props->conv_flags->flag_hashtag = TRUE;
	else
		return (0);
	return (1);
}

static int	ft_check_while(char *formatting, t_format *f_props, size_t len)
{
	int	i;

	i = 0;
	while (i < (int)len)
	{
		if (check_flags(formatting + i, f_props) == 1)
			i += check_flags(formatting + i, f_props);
		else if (ft_isdigit(formatting[i]))
			i += ft_check_min_width(formatting + i, f_props);
		else if (formatting[i] == '.')
			i += ft_check_pointers(formatting + i, f_props);
		else
			return (ft_new_errors(f_props, 2));
	}
	if (0 == len - i)
		return (1 + len);
	else
		return (ft_new_errors(f_props, 1));
}

int	ft_check_all_flags(char *formatting, t_format *f_props)
{
	char		*conversion;
	size_t		len;
	size_t		i;

	conversion = ft_strpbrk(formatting, "cspdiuxX%");
	len = 0;
	i = 0;
	if (NULL != conversion)
	{
		f_props->conv_flags->conversion = *conversion;
		len = conversion - formatting;
		i = ft_check_while(formatting, f_props, len);
		ft_formatting(f_props);
		return (i);
	}
	else
		return (ft_new_errors(f_props, 1));
}
