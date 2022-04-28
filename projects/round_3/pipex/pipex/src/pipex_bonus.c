/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:32:11 by gnameles          #+#    #+#             */
/*   Updated: 2021/12/30 16:26:42 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

static void	ft_child_process(char *argv, char **envp)
{
	pid_t	pid;
	int		fd[2];

	if (pipe(fd) == -1)
		ft_error();
	pid = fork();
	if (pid == -1)
		ft_error();
	if (pid == 0)
	{
		close(fd[0]);
		dup2(fd[1], STDOUT_FILENO);
		close(fd[1]);
		ft_execute(argv, envp);
	}
	else
	{
		close(fd[1]);
		dup2(fd[0], STDIN_FILENO);
		close(fd[0]);
		waitpid(pid, NULL, 0);
	}
}

static void	ft_doc_process(char *limiter, int *fd)
{
	char	*line;

	close(fd[0]);
	while (ft_get_next_line(&line))
	{
		if ((ft_strlen(line) - 1) == ft_strlen(limiter)
			&& ft_strncmp(line, limiter, ft_strlen(limiter)) == 0)
			exit(EXIT_SUCCESS);
		write(fd[1], line, ft_strlen(line));
		free(line);
	}
	close(fd[1]);
}

static void	ft_here_doc(char *limiter, int argc)
{
	pid_t	pid;
	int		fd[2];

	if (argc < 5)
		ft_usage();
	if (pipe(fd) == -1)
		ft_error();
	pid = fork();
	if (pid == 0)
		ft_doc_process(limiter, fd);
	else
	{
		close(fd[1]);
		dup2(fd[0], STDIN_FILENO);
		close(fd[0]);
		waitpid(pid, NULL, 0);
	}
}

static int	ft_fd_process(int argc, char **argv, int *filein, int *fileout)
{
	if (ft_strncmp(argv[1], "here_doc", 8) == 0)
	{
		*fileout = ft_open_file(argv[argc - 1], 0);
		ft_here_doc(argv[2], argc);
		return (3);
	}
	else
	{
		*fileout = ft_open_file(argv[argc - 1], 1);
		*filein = ft_open_file(argv[1], 2);
		dup2(*filein, STDIN_FILENO);
		close(*filein);
		return (2);
	}
	return (0);
}

int	main(int argc, char **argv, char **envp)
{
	int	i;
	int	filein;
	int	fileout;

	if (argc >= 5)
	{
		i = ft_fd_process(argc, argv, &filein, &fileout);
		while (i < argc - 2)
			ft_child_process(argv[i++], envp);
		dup2(fileout, STDOUT_FILENO);
		close(fileout);
		ft_execute(argv[argc - 2], envp);
	}
	ft_usage();
}
