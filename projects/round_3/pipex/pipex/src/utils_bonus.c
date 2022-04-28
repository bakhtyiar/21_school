/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:32:30 by gnameles          #+#    #+#             */
/*   Updated: 2021/12/30 16:27:04 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

void	ft_usage(void)
{
	ft_putstr_fd("Error: Bad argument\n", 2);
	ft_putendl_fd("Usage: ./pipex <file1> <cmd1> <cmd2> <...> <file2>", 1);
	ft_putendl_fd("./pipex here_doc <LIMITER> <cmd> <cmd1> <...> <file>", 1);
	exit(EXIT_SUCCESS);
}

int	ft_open_file(char *argv, int i)
{
	int	file;

	file = 0;
	if (i == 0)
		file = open(argv, O_WRONLY | O_CREAT | O_APPEND, 0777);
	else if (i == 1)
		file = open(argv, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	else if (i == 2)
		file = open(argv, O_RDONLY, 0777);
	if (file == -1)
		ft_error();
	return (file);
}

int	ft_get_next_line(char **line)
{
	char	*buffer;
	int		i;
	int		bwr;
	char	ch;

	i = 0;
	bwr = 0;
	buffer = (char *)malloc(10000);
	if (!buffer)
		return (-1);
	bwr = read(0, &ch, 1);
	while (bwr && ch != '\n' && ch != '\0' && i < 9999)
	{
		if (ch != '\n' && ch != '\0')
			buffer[i] = ch;
		i++;
		bwr = read(0, &ch, 1);
	}
	buffer[i] = '\n';
	buffer[++i] = '\0';
	*line = buffer;
	return (bwr);
}
