#include <stdlib.h>

int	ft_strcpy(char *in, char *out)
{
	int	i;

	i = 0;
	while (out[i] != '\0')
	{
		in[i] = out[i];
		i++;
	}
	return (i);
}

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strs_len(int size, char **strs)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < size)
	{
		sum += ft_str_len(strs[i]);
		i++;
	}
	return (sum);
}

void	ft_strs_fill(int size, char **strs, char *sep, char *out)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j += ft_strcpy(out + j, *(strs + i));
		if (i < size - 1)
		{
			j += ft_strcpy(out + j, sep);
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*out;
	int		sep_len;
	int		len;

	sep_len = 0;
	len = 0;
	out = NULL;
	if (size == 0)
	{
		out = malloc(1);
		*out = '\0';
		return (out);
	}
	if (size < 0)
	{
		return (NULL);
	}
	sep_len = ft_str_len(sep);
	len = ft_strs_len(size, strs) + size * sep_len * 2 - 2;
	out = malloc(len);
	ft_strs_fill(size, strs, sep, out);
	return (out);
}
