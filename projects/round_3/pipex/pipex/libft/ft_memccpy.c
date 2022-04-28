/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:18:49 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/15 10:18:51 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*p_dst;
	unsigned char	*p_src;

	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(p_dst + i) = *(unsigned char *)(p_src + i);
		if (p_dst[i] == (unsigned char)c)
			return ((void *)(dst + i + 1));
		++i;
	}
	return (NULL);
}
