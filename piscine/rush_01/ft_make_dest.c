t_comb ft_set_comb(t_cmb *comb, t_cmb *row, int *offset, int *j)
{
    int i;

    i = 0;
    while (i < 24)
    {
        if (row[j].x0 == comb[i].x0 && row[j].x5 == comb[i].x5)
        {
            if ((row[j].x0 == 1 && row[j].x5 == 4) || (row[j].x0 == 4 && row[j].x5 == 1) && 0 < offset)
            {
                j--;
                offset = 0;
                ft_recurred_set_comb
            }
            if ((row[j].x0 == 1 && row[j].x5 == 3) || (row[j].x0 == 3 && row[j].x5 == 1)
            || (row[j].x0 == 1 && row[j].x5 == 2) || (row[j].x0 == 2 && row[j].x5 == 1) && 1 < offset)
            {
                j--;
                offset = 1;
                ft_recurred_set_comb
            }
            if ((row[j].x0 == 2 && row[j].x5 == 3) || (row[j].x0 == 3 && row[j].x5 == 2)
            || (row[j].x0 == 2 && row[j].x5 == 2) && 2 < offset)
            {
                j--;
                offset = 1;
                ft_recurred_set_comb
            }
            return (comb[i + offset]);
        }
        i++;
    }
    return (NULL);
}

t_comb    ft_recurred_set_comb(t_cmb *comb, t_cmb *row, int *offset, int *j)
{

}

t_cmb *ft_make_dest(t_cmb *comb, t_cmb *row)
{
    t_cmb   *dest;
    int i;
    int j;
    int offset;

    dest = malloc(sizeof(t_cmb) * 4);
    i = 0;
    j = 0;
    offset = 0;

    while (i < 4)
    {
        dest[i] = ft_set_comb(comb, row, offset, i);
        i++;
    }
    i--;
    while (!check_strins(row))
    {
        offset++;
        dest[i] = ft_set_comb(comb, row, offset, i);
    }
    return (dest);
}