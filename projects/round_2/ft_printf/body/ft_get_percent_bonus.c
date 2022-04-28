/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_percent_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:30:01 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/20 15:30:03 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_get_percent(t_format *f_props)
{
	f_props->formatted_src = malloc(2 * sizeof(char));
	f_props->formatted_src[0] = '%';
	f_props->formatted_src[1] = 0;
	f_props->len += 1;
	f_props->len_formatted = 1;
}
