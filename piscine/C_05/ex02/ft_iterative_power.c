int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (power == 0)
		return (1);
	while (1 < power)
	{
		result *= nb;
		power--;
	}
	return (result);
}
