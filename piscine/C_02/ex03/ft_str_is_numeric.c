int	ft_str_is_numeric(char *str)
{
	int	i;

	if (*str == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || 57 < str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
