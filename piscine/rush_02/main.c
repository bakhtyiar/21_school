char	*main(int argc, char **argv)
{
	int				fdest;
	unsigned int	num;
	char			*out;

	if (argc == 3)
	{
		fdest = argv[1];
		num = ft_atoi(argv[2]);
	}
	else if (argc == 2)
	{
		fdest = "numbers.dict";
		num = ft_atoi(argv[1]);
	}
	if (!is_valid_uint(num))
		return ("Error\n");
	out = ft_get_sentence(num, fdest);
	write(1, out, len);
	write(1, '\n', 1);
	return (out);
}
