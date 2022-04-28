#include "ft.h"
/*
*	Создаем массив-словарь, открываем файл,
*	записываем в массив-словарь содеримое файла,
*	закрываем файл, находим совпадение в ft_strstr,
*	выводим найденное через ft_print
*/
void	ft_init(char *argv, char *dict)
{
	char	*p_number;
	int		i;
	int		fd;

	i = 0;
	if (ft_valid_input(argv) == 0)
	{
		write(1, "Invalid argument\n", 17);
		return ;
	}
	dict = (char *)malloc(4);
	fd = open("numbers.dict.txt", O_RDONLY);
	while (read(fd, dict + i, 1))
		i++;
	close(fd);
	p_number = ft_get_match(dict, argv);
	if (p_number == 0)
		write(1, "No matches\n", 11);
	else
		ft_print_sentence(p_number);
	free(dict);
}
