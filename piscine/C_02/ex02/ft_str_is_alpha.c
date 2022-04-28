int	is_uppercase(char *str)
{
	if (65 <= *str && *str <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_lowercase(char *str)
{
	if (97 <= *str && *str <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_lowercase(str[i]) || !is_uppercase(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
