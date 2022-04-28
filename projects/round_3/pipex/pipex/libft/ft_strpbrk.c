/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:35:08 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/15 11:35:12 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strpbrk(const char *str, const char *ptr)
{
	if (str == NULL || ptr == NULL)
		return (NULL);
	while (*str && !ft_strchr(ptr, *str))
		str++;
	if (*str == 0)
		return (NULL);
	return ((char *)str);
}
