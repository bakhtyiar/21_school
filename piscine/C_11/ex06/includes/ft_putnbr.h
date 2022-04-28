#ifndef FT_PUTNBR_H
# define FT_PUTNBR_H
void	ft_put_ch(char ch)
{
	write(1, &ch, 1);
}

void	ft_putnbr(int nb)
{
	int		dig;
	int		is_min;

	is_min = 0;
	if (nb == -2147483648)
	{
		nb += 1;
		is_min = 1;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	if (is_min)
		dig = nb % 10 + 1 + '0';
	else
		dig = nb % 10 + '0';
	ft_put_ch(dig);
}
#endif