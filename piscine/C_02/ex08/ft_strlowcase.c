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

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_uppercase(str + i))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
