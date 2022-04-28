/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:30:10 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/20 15:30:33 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

static void	ft_put_formatted(t_format *f_props)
{
	char	*temp;
	int		i;

	i = 0;
	temp = f_props->formatted_src;
	while (i < f_props->len_formatted)
	{
		write(1, temp + i, 1);
		i++;
	}
}

static int	ft_printf_process(const char *format, va_list args)
{
	t_format	*f_props;

	f_props = ft_start_struct(args);
	while (*format != 0)
	{
		if (*format == '%')
		{
			format += ft_check_all_flags((char *)format + 1, f_props);
			format++;
			ft_put_formatted(f_props);
			ft_reset_struct(f_props);
		}
		else
		{
			f_props->len = f_props->len + 1;
			write(1, format, 1);
			format++;
		}
	}
	return (ft_end_struct(f_props));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	if (NULL == format)
		return (len);
	va_start(args, format);
	len = ft_printf_process(format, args);
	va_end(args);
	return (len);
}
