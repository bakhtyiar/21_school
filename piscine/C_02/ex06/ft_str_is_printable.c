int	ft_str_is_printable(char *str)
{
	int	i;

	if (*str == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || 126 < str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
