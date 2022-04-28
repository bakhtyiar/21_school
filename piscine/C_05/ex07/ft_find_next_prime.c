int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0 && nb != i)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next_prime;

	next_prime = nb;
	if (nb == 2147483647)
		return (2147483647);
	while (next_prime < 2147483647)
	{
		next_prime++;
		if (ft_is_prime(next_prime))
			return (next_prime);
	}
	return (nb);
}
