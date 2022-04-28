/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnameles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:30:41 by gnameles          #+#    #+#             */
/*   Updated: 2021/12/08 16:43:21 by gnameles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_has(char	*str, char ch)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	ascii[255] = {0};
	int	j;

	j = 0;
	if (argc == 3)
	{
		while (argv[1][j])
		{
			if (ft_has(argv[2], argv[1][j]) && ascii[(int)argv[1][j]] == 0)
			{
				ascii[(int)argv[1][j]] = 1;
				write(1, &(argv[1][j]), 1);
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
