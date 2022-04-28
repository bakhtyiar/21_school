/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:32:42 by gnameles          #+#    #+#             */
/*   Updated: 2021/12/30 16:30:30 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

static char	*ft_get_path(char *cmd, char **paths)
{
	int		i;
	char	*path;
	char	*part_path;

	i = 0;
	while (paths[i])
	{
		if (cmd[0] != '/')
		{
			part_path = ft_strjoin(paths[i], "/");
			path = ft_strjoin(part_path, cmd);
			free(part_path);
		}
		else
			path = ft_strdup(cmd);
		if (access(path, F_OK) == 0)
			return (path);
		i++;
	}
	if (path)
		free(path);
	ft_putstr_fd("command not found: ", 2);
	ft_putendl_fd(cmd, 2);
	return (0);
}

static void	ft_free_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

static char	*ft_find_path(char **cmd, char **envp)
{
	char	**paths;
	char	*path;
	int		i;

	i = 0;
	while (ft_strnstr(envp[i], "PATH", 4) == 0)
		i++;
	paths = ft_split(envp[i] + 5, ':');
	path = ft_get_path(cmd[0], paths);
	ft_free_matrix(paths);
	if (path)
		return (path);
	return (0);
}

void	ft_error(void)
{
	perror(strerror(errno));
	exit(errno);
}

void	ft_execute(char *argv, char **envp)
{
	char	**cmd;
	char	*path;
	int		ex;

	ex = 0;
	cmd = ft_split(argv, ' ');
	path = ft_find_path(cmd, envp);
	ex = execve(path, cmd, envp);
	ft_free_matrix(cmd);
	if (path)
		free(path);
	else if (!path)
		exit(127);
	if (ex == -1)
		ft_error();
}
