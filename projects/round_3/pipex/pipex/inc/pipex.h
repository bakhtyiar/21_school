/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:31:23 by gnameles          #+#    #+#             */
/*   Updated: 2021/12/30 16:20:36 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../libft/libft.h"
# include <sys/wait.h>
# include <sys/errno.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>

int		ft_get_next_line(char **line);
void	ft_execute(char *argv, char **envp);
int		ft_open_file(char *argv, int i);
void	ft_error(void);
void	ft_usage(void);

#endif
