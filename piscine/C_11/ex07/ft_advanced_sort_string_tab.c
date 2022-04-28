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

int	ft_replace(char **argv1, char **argv2)
{
	char	*temp;

	temp = *argv1;
	*argv1 = *argv2;
	*argv2 = temp;
	return (1);
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int		j;
	int		replaces;

	j = 2;
	replaces = 1;
	if (ft_strlen(tab))
	{
		while (replaces != 0)
		{
			replaces = 0;
			j = 2;
			while (j < ft_strlen(tab))
			{
				if (cmp(*(tab + j - 1), *(tab + j)) > 0)
				{
					ft_replace((tab + j - 1), (tab + j));
					replaces++;
				}
				j++;
			}
		}
	}
}
#endif