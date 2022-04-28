/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_percent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:53:21 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/17 16:53:22 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_percent(t_format *f_props)
{
	f_props->formatted_src = malloc(2 * sizeof(char));
	f_props->formatted_src[0] = '%';
	f_props->formatted_src[1] = 0;
	f_props->len += 1;
	f_props->len_formatted = 1;
}
