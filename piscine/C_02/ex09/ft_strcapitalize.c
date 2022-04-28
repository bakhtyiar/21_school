int	is_numeric(char *str)
{
	if (48 <= *str && *str <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

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

int	is_end_word(char *str)
{
	if (32 <= *str && *str <= 126)
	{
		if (!is_lowercase(str) && !is_uppercase(str) && !is_numeric(str))
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_first_l;

	is_first_l = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_first_l && is_lowercase(str + i))
		{
			str[i] -= 32;
			is_first_l = 0;
		}
		else if (is_end_word(str + i))
		{
			is_first_l = 1;
		}
		else if (is_uppercase(str + i) && !is_first_l)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
