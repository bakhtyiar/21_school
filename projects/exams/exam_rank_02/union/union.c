/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:18:18 by gnameles          #+#    #+#             */
/*   Updated: 2021/12/08 16:26:17 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int	argc, char	**argv)
{
	int ascii[255] = {0};
	int i;
   	int j;

	i = 1;
	j = 0;
	if (argc == 3)
	{
		while (i < 3)
		{
			j = 0;
			while (argv[i][j])
			{
				if (ascii[(int)argv[i][j]] == 0)
				{
					write(1, &(argv[i][j]), 1);
					ascii[(int)argv[i][j]] = 1;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
