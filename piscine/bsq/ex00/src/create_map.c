#include "../includes/ft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_complete_map_legend(t_map_params *parameters, char *first_line)
{
	int		i;
	int		length;
	char	*lines_count;

	length = ft_strlen(first_line);
	lines_count = (char *)malloc(sizeof(char) * (length - 3 + 1));
	if (!lines_count)
		return (0);
	i = -1;
	while (first_line[++i + 3] != '\0')
		lines_count[i] = first_line[i];
	lines_count[i] = '\0';
	if (ft_strlen(lines_count) == 0)
	{
		free (lines_count);
		return (0);
	}
	parameters->lines = ft_atoi(lines_count);
	parameters->empty = first_line[i++];
	parameters->obstacles = first_line[i++];
	parameters->fill = first_line[i];
	free (lines_count);
	return (1);
}

int	ft_read_like_file(int fd, t_map_params *param, char *str)
{
	int	i;
	int	f;
	int	is;

	i = 0;
	f = 0;
	str += param->columns;
	i = read(fd, str, 32768);
	is = 1;
	while (is && ++f < param->lines)
	{
		i = read(fd, str, 1);
		if (i < 0)
			return (0);
	}
	str -= param->columns;
	if (read(fd, str, 1) > 0
		|| str[(param->lines - 1)*(param->columns) - 1] != '\n')
		return (0);
	return (1);
}

int	ft_read_like_cli_val_part(int fd, t_map_params *param, char *str, char *buf)
{
	if (read(fd, str, 1) > 0
		|| str[(param->lines - 1)*(param->columns) - 1] != '\n')
	{
		free (buf);
		return (0);
	}
	return (1);
}

int	ft_read_like_cli(int fd, t_map_params *param, char *str)
{
	int		i;
	int		f;
	char	*buf;

	i = 0;
	f = 0;
	buf = malloc(1);
	while (++f < param->lines)
	{
		buf = ft_read_until(fd, '\n');
		if (ft_strlen(buf) != param->columns - 1)
			return (0);
		str[param->columns * f - 1] = '\n';
		str[param->columns * f] = '\0';
		ft_strcat(str, buf);
		if (i < 0)
		{
			free (buf);
			return (0);
		}
	}
	if (ft_read_like_cli_val_part(fd, param, str, buf) == 0)
		return (0);
	free (buf);
	return (1);
}

char	*ft_read_file(int fd, t_map_params *param)
{
	char	*temp;
	char	*str;
	int		completed_legend;

	completed_legend = ft_complete_map_legend(param, ft_read_until(fd, '\n'));
	if (completed_legend == 0)
		return (0);
	temp = ft_read_until(fd, '\n');
	param->columns = ft_strlen(temp) + 1;
	if (param->lines <= 0)
		return (0);
	str = (char *)malloc(sizeof(*str) * (param->lines * param->columns));
	if (str == 0)
		return (0);
	str[0] = '\0';
	ft_strcat(str, temp);
	str[param->columns - 1] = '\n';
	if (fd == 0)
		ft_read_like_cli(fd, param, str);
	else
		ft_read_like_file(fd, param, str);
	str[param->lines * param->columns - 1] = '\0';
	return (str);
}
