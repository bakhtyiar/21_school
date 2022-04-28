#ifndef FT_SORT_STRING_TAB
# define FT_SORT_STRING_TAB

int	ft_strlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_str_asc(char **argv1, char **argv2)
{
	int		i;
	char	*temp;

	i = 0;
	while ((*argv1)[i] != '\0' && (*argv2)[i] != '\0')
	{
		if (0 < (*argv1)[i] - (*argv2)[i])
		{
			temp = *argv1;
			*argv1 = *argv2;
			*argv2 = temp;
			return (1);
		}
		else if ((*argv1)[i] - (*argv2)[i] < 0)
			return (0);
		i++;
	}
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int		j;
	int		replaces;
	int		len;

	j = 2;
	replaces = 1;
	len = ft_strlen(tab);
	if (len > 2)
	{
		while (replaces != 0)
		{
			replaces = 0;
			j = 2;
			while (j < len)
			{
				if (ft_str_asc((tab + j - 1), (tab + j)))
					replaces++;
				j++;
			}
		}
	}
}
#endif