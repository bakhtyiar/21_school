/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:48:34 by gnameles          #+#    #+#             */
/*   Updated: 2021/10/27 12:48:36 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && n > 0 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (!n)
		return (0);
	return ((*(const unsigned char *)s1 - *(const unsigned char *)s2));
}
