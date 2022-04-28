/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:11:46 by gnameles          #+#    #+#             */
/*   Updated: 2021/11/09 15:11:50 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

static char	*ft_read_to_l_stash(int fd, char *l_stash)
{
	char	*buff;
	int		bytes_read;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(l_stash, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buff, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[bytes_read] = '\0';
		l_stash = ft_strjoin(l_stash, buff);
	}
	free(buff);
	return (l_stash);
}

static char	*ft_get_line(char *l_stash)
{
	int		i;
	char	*line;

	i = 0;
	if (!l_stash[i] || !l_stash)
		return (NULL);
	while (l_stash[i] != '\0' && l_stash[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (l_stash[i] != '\0' && l_stash[i] != '\n')
	{
		line[i] = l_stash[i];
		i++;
	}
	if (l_stash[i] == '\n')
	{
		line[i] = l_stash[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

static char	*ft_new_l_stash(char *l_stash)
{
	int		i;
	int		j;
	char	*new_l_stash;

	i = 0;
	while (l_stash[i] != '\0' && l_stash[i] != '\n')
		i++;
	if (l_stash[i] == '\0')
	{
		free(l_stash);
		return (NULL);
	}
	new_l_stash = (char *)malloc(sizeof(char) * (ft_strlen(l_stash) - i + 1));
	if (!new_l_stash)
		return (NULL);
	i++;
	j = 0;
	while (l_stash[i] != '\0')
		new_l_stash[j++] = l_stash[i++];
	new_l_stash[j] = '\0';
	free(l_stash);
	return (new_l_stash);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*l_stash;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	l_stash = ft_read_to_l_stash(fd, l_stash);
	if (!l_stash)
		return (NULL);
	line = ft_get_line(l_stash);
	l_stash = ft_new_l_stash(l_stash);
	return (line);
}
