/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:32:00 by gnameles          #+#    #+#             */
/*   Updated: 2021/12/30 16:09:48 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

void	ft_child_process(char **argv, char **envp, int *fd)
{
	int		filein;

	filein = open(argv[1], O_RDONLY, 0777);
	if (filein == -1)
		ft_error();
	dup2(filein, STDIN_FILENO);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[0]);
	close(fd[1]);
	close(filein);
	ft_execute(argv[2], envp);
}

void	ft_parent_process(char **argv, char **envp, int *fd)
{
	int		fileout;

	fileout = open(argv[4], O_RDWR | O_CREAT | O_TRUNC, 0777);
	if (fileout == -1)
		ft_error();
	dup2(fd[0], STDIN_FILENO);
	dup2(fileout, STDOUT_FILENO);
	close(fd[0]);
	close(fd[1]);
	close(fileout);
	ft_execute(argv[3], envp);
}

int	main(int argc, char **argv, char **envp)
{
	int		fd[2];
	pid_t	pid;

	if (argc == 5)
	{
		if (pipe(fd) == -1)
			ft_error();
		pid = fork();
		if (pid == -1)
			ft_error();
		else if (pid == 0)
			ft_child_process(argv, envp, fd);
		else
		{
			waitpid(pid, NULL, 0);
			ft_parent_process(argv, envp, fd);
		}
		return (0);
	}
	ft_putendl_fd("Error: Bad arguments", 2);
	ft_putendl_fd("Usage: ./pipex <file1> <cmd1> <cmd2> <file2>", 1);
	return (1);
}
