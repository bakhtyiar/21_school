/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:12:31 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/09 15:12:32 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *str, int ch)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == (char) ch)
			return (str + i);
		i++;
	}
	if (str[i] == ch)
		return (str + i);
	return (NULL);
}

char	*ft_strjoin(char *l_stash, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!l_stash)
	{
		l_stash = (char *)malloc(1 * sizeof(char));
		l_stash[0] = '\0';
	}
	if (!l_stash || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(l_stash) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	while (l_stash[++i] != '\0')
		str[i] = l_stash[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(l_stash) + ft_strlen(buff)] = '\0';
	free(l_stash);
	return (str);
}
