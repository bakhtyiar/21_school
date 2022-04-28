#include <unistd.h>

int	ft_power_base_system(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i;
		while (str[++j] != '\0')
		{
			if (str[j] == str[i])
				return (0);
		}
	}
	if (i == 0)
		return (0);
	if (i == 1)
		return (1);
	return (i);
}

void	ft_put_ch(char ch)
{
	write(1, &ch, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	char	number[128];
	int		divider;

	divider = ft_power_base_system(base);
	if (divider != 0 && divider != 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		i = 0;
		if (nbr == 0)
			number[i++] = base[(nbr % divider)];
		while (0 < nbr)
		{
			number[i] = base[(nbr % divider)];
			nbr /= divider;
			i++;
		}
		i--;
		while (0 <= i)
			ft_put_ch(number[i--]);
	}
}
