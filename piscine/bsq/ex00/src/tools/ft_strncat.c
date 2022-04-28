#include "../../includes/ft.h"

char	*ft_strncat(char *dest, char *src, int num)
{
	int	i;
	int	j;

	j = 0;
	while (dest[j] != '\0')
		j++;
	i = 0;
	while (i < num && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
