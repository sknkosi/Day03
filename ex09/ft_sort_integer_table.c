
void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	while (i++ < size)
	{
		j = i + 1;
		while (j-- > 0)
		{
			if (tab[j] < tab[j - 1])
			{
				tmp = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = tmp;
			}
		}
	}
}
