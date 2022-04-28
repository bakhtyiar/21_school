#include "ft.h"
/*
*	Находим первую букву в строке с найденным нужным числом
*	через ft_cinstr. Находим конец фразы в этой же строке
*	через ft_strchar
*	И от первой буквы до конца строки печатаем символы через
*	ft_putchar
*/

void	ft_print_sentence(char *p_number)
{
	char	*begin;
	char	*finish;

	begin = ft_cinstr(p_number);
	finish = ft_strchar(begin, '\n');
	while (begin < finish)
		ft_putchar(*begin++);
	ft_putchar('\n');
}
