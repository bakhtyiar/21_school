/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:39:11 by gnameles          #+#    #+#             */
/*   Updated: 2021/10/27 12:39:22 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_spaces(const char *str)
{
	char	*res;
	size_t	i;

	i = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v')
		|| (str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))
		i++;
	if ((str[i] == '+') && (str[i + 1] >= '0') && (str[i + 1] <= '9'))
		i++;
	res = &((char *)str)[i];
	return (res);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	long	res;
	int		sign;
	char	*p_ch;

	i = 0;
	res = 0;
	sign = 1;
	p_ch = ft_spaces(str);
	if (p_ch[i] == '-' && p_ch[i + 1] >= '0' && p_ch[i + 1] <= '9')
	{
		sign = -1;
		i++;
	}
	while (p_ch[i] >= '0' && p_ch[i] <= '9')
	{
		if ((res * 10 + (p_ch[i] - '0')) / 10 != res && sign == -1)
			return (0);
		if ((res * 10 + (p_ch[i] - '0')) / 10 != res)
			return (-1);
		res = res * 10 + (p_ch[i] - '0');
		i++;
	}
	return ((int)res * sign);
}
