int	ft_recursive_factorial(int nb)
{
	if (1 < nb)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	if (nb == 1)
		return (1);
	return (0);
}
