#include "ft.h"

/*
*	Взяли первую букву и перебираем строку пока не дойдем до совпадния
*	в строке символа с reference. У нас это обычно '\n'
*/

char	*ft_strchar(char *str, char reference)
{
	int	i;

	i = 0;
	while (str[i] != '\0' || str[i] != '\n')
	{
		if (str[i] == reference)
			return (str + i);
		i++;
	}
	return ((void *)0);
}
