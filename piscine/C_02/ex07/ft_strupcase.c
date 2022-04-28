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

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lowercase(str+i))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
