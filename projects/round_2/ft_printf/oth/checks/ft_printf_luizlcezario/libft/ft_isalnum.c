/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-ce <llima-ce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 22:53:50 by llima-ce          #+#    #+#             */
/*   Updated: 2021/08/30 17:57:42 by llima-ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	if ((arg <= 'z' && arg >= 'a') || (arg <= 'Z' && arg >= 'A')
		|| (arg <= '9' && arg >= '0'))
		return (8);
	return (0);
}
