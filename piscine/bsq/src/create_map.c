#include "../includes/ft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_read_until(int fd, char ref)
{
	char	*buff;
	char	*temp;
	char	*input;
	int		length;

	buff = malloc(sizeof(*buff));
	input = malloc(sizeof(*input));
	if (!input || !buff)
		return (0);
	input[0] = '\0';
	length = 0;
	while (read(fd, buff, 1) > 0 && *buff != ref)
	{
		length++;
		temp = input;
		input = malloc(sizeof(*input) * (++length + 1));
		if (!input)
			return (0);
		input[0] = '\0';
		ft_strcat(input, temp);
		ft_strncat(input, buff, 1);
		free(temp);
	}
	input[length] = '\0';
	return (input);
}

int	ft_complete_map_legend(t_map_params *parameters, char *first_line)
{
	int		i;
	int		length;
	char	*lines_count;

	length = ft_strlen(first_line);
	lines_count = (char *)malloc(sizeof(char) * (length - 3 + 1));
	if (!lines_count)
		return (0);
	i = 0;
	while (first_line[i + 3] != '\0')
	{
		lines_count[i] = first_line[i];
		i++;
	}
	lines_count[i] = '\0';
	parameters->lines = ft_atoi(lines_count);
	parameters->empty = first_line[i++];
	parameters->obstacles = first_line[i++];
	parameters->fill = first_line[i];
	return (1);
}

char	*ft_read_file(int fd, t_map_params *param)
{
	int		i;
	int		f;
	int		is;
	char	*temp;
	char	*str;

	f = 0;
	ft_complete_map_legend(param, ft_read_until(fd, '\n'));
	temp = ft_read_until(fd, '\n');
	param->columns = ft_strlen(temp) + 1;
	if (param->lines <= 0)
		return (0);
	str = (char *)malloc(sizeof(*str) * (param->lines * param->columns));
	if (!str)
		return (0);
	str[0] = '\0';
	ft_strcat(str, temp);
	printf("1.1\n");
	str[param->columns - 1] = '\n';
	printf("1.2\n");
	str += param->columns;
	printf("1.3\n");
	i = read(fd, str, 32768);
	// i = read(fd, str, 1);
	printf("1.4\n");
	printf("fd = %d\n", fd);
	is = 1;
	while (is && ++f < param->lines - 1)
	{
		printf("1.5\n");
		while (i > 0 && str[i - 1] != '\n')
		{
			printf("1.6\n");
			i = read(fd, str, 1);
		}
		printf("1.7\n");
		if (i < 0)
			return (0);
		printf("1.8\n");
		printf("i = %d param->lines = %d param->columns = %d\n", i, param->lines, param->columns);
	}
	// if (i != (param->lines) * param->columns)
	// 	return (0);
	// printf("1.9\n");
	str -= param->columns;
	// printf("1.10\n");
	// printf("fd = %d, temp = %s, str len = %d\n", fd, temp, ft_strlen(str));
	// if (read(fd, temp, 1) > 0 || str[(param->lines - 1) * param->columns - 1] != '\n')
	// 	return (0);
	// printf("1.11\n");
	str[param->lines * param->columns - 1] = '\0';
	return (str);
}
