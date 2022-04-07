void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab [i] > tab [i + 1])
		{
			temp = tab [i + 1];
			tab [i + 1] = tab [i];
			tab [i] = temp;
			i = -1;
		}
		i++;
	}
}
