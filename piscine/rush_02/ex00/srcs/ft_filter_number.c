#include "ft.h"

int	ft_isspace(char *c)
{
	if (*c == ' ' || *c == '\t' || *c == '\n')
		return (1);
	else if (*c == '\v' || *c == '\f' || *c == '\r')
		return (1);
	return (0);
}

int	ft_filter_number(char *str)
{
	int		nb_strlen;
	char	*nb_result;
	int		nb_start;
	int		i;
	int		nb_len;

	i = 0;
	nb_strlen = ft_strlen(str);
	if (nb_strlen == 0)
		return (0);
	while (ft_isspace(&str[i]))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
		return (0);
	nb_len = 0;
	nb_start = i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb_len++;
		i++;
	}
	if (nb_len == 0)
		return (0);
	nb_result = malloc(sizeof(char) * nb_len + 1);
	i = 0;
	while (str[nb_start] >= '0' && str[nb_start] <= '9')
	{
		nb_result[i] = str[nb_start];
		i++;
		nb_start++;
	}
	nb_result[i] = '\0';
	ft_strcpy(str, nb_result);
	free(nb_result);
	return (1);
}
