char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
