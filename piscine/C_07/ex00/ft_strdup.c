#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*src_out;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(src);
	src_out = malloc(size);
	if (src_out != NULL)
	{
		while (i < size)
		{
			src_out[i] = src[i];
			i++;
		}
		return (src_out);
	}
	return (NULL);
}
