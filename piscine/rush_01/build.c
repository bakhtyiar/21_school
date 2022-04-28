typedef struct  s_combo
{
    char    x0;
    char    x1;
    char    x2;
    char    x3;
    char    x4;
    char    x5;
}   t_cmb;

void build(t_cmb	*combination, t_cmb	*row, int	index_pair)
{
	t_cmb	*dest;
	int i;

	i = 0;
	while(i < 24)
	{
		if (row[index_pair].x0 == combination[i].x0
			&& row[index_pair].x5 == combination[i].x5)
		{
			dest[index_pair] = combination[i];
			if (index_pair == 3)
				check(dest);
			else
				build(combination, row, index_pair + 1);
		}
		i++;
	}
}
