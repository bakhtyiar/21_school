#include "ft.h"

char	*ft_stread(char *buffer)
{
	int		i;
	int		k;

	buffer = (char *)malloc(4);
	k = 0;
	i = read(0, buffer + k, 1);
	while (i || (k > 0 && buffer[k] == '\n'))
		k++;
	return (buffer);
}
