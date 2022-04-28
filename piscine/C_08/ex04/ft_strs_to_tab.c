#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*out;
	int		len;
	int		i;

	len = 0;
	while (src[len])
		len++;
	out = (char *)malloc(sizeof(char) * len + 1);
	if (out == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		out[i] = src[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*s_out;
	int				i;

	s_out = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (s_out == NULL)
		return (NULL);
	i = 0;
	while (av[i] != NULL && i < ac)
	{
		s_out[i].size = ft_strlen(av[i]);
		s_out[i].str = av[i];
		s_out[i].copy = ft_strdup(av[i]);
		i++;
	}
	s_out[i].size = 0;
	s_out[i].str = 0;
	s_out[i].copy = 0;
	return (s_out);
}
