#include "ft.h"

int	ft_strlen(char *str)
{
	int	strlen;

	strlen = 0;
	while (str[strlen] != '\0')
	{
		strlen++;
	}
	return (strlen);
}
