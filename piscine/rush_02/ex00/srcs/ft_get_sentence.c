#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft.h"

char	*ft_parse_num(char	**start_of_line)
{
	char	*str;
	int		len;
	int		dict;
	int		is;

	dict = open(*start_of_line, O_RDONLY);
	str = malloc(sizeof(char));
	is = 1;
	while (is)
	{
		len = read(dict, str, sizeof(char));
		if (str[len - 1] == ':')
			is = 0;
	}
	str[len - 1] = '\0';
	*start_of_line += len;
	close(dict);
	return (str);
}

char	*ft_parse_sentence(char	*ptr)
{
	char	*str;
	int		len;
	int		dict;
	int		is;

	dict = open(ptr, O_RDONLY);
	str = malloc(sizeof(char));
	len = 0;
	is = 1;
	while (is)
	{
		len = read(dict, str, sizeof(char));
		if (str[len - 1] == '\n' || str[len - 1] == '\0')
			is = 0;
	}
	str[len - 1] = '\0';
	close(dict);
	return (str);
}

char	*ft_get_sentence(char	*ref, char	*fdest)
{
	char	*num;
	char	*sentence;
	char	*ptr;
	int		is;

	is = 1;
	ptr = 0;
	ptr = fdest;
	while (is)
	{
		num = ft_parse_num(&ptr);
		//ft_atoi(num);
		sentence = ft_parse_sentence(ptr);
		if (ft_strcmp(num, ref) == 0)
			is = 0;
	}
	//ft_cut_wspace(sentence);
	return (sentence);
}
