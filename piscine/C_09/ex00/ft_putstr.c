#ifndef UNISTD_H
# define UNISTD_H
# include <unistd.h>
#endif

#ifndef FT_PUSTR
# define FT_PUSTR
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, (str + i), 1);
		i++;
	}
}
#endif