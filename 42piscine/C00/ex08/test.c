#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	recursive(int *a, int i, int j, int n)
{
	if (i == n)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(a[i]);
			i++;
		}
		if (a[0] != 10 - n + 48)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	while (j < 10)
	{
		a[i] = j + 48;
		recursive(a, i + 1, j + 1, n);
		j++;
	}
}

void	ft_print_combn(int n)
{
	int	a[12];
	int	i;
	int	j;

	i = 0;
	j = 0;
	a[n] = ',';
	a[n + 1] = ' ';
	recursive(a, i, j, n);
}

int main(void)
{
	ft_print_combn(2);
}

