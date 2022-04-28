#include "../../includes/ft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_service(char *input, char *temp, char *buff)
{
	input[0] = '\0';
	ft_strcat(input, temp);
	ft_strncat(input, buff, 1);
	if (!input)
	{
		free (buff);
		return (0);
	}
	return (1);
}

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
		if (ft_service(input, temp, buff) == 0)
			return (0);
	}
	input[length] = '\0';
	free (buff);
	return (input);
}
