/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 15:30:11 by gnameles          #+#    #+#             */
/*   Updated: 2021/12/29 15:43:46 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/errno.h>
#include <stdio.h>

int	main(int argc, char **argv, char **envp)
{
	int	i;

	printf("1\n");
	i = execve("/bin/bash", argv, envp);
	printf("2\n");
	printf("%d\n", i);
	printf("3\n");
	return (0);
}