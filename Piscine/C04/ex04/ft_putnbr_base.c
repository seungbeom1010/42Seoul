/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:22:43 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/15 13:41:34 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	find_index(char *base)
{
	int		index;

	index = 0;
	while (base[index])
		index++;
	return (index);
}

int	base_check(char *base)
{
	int		index;
	int		tmp_index;

	index = 0;
	while (base[index])
	{
		if (base[index] == '+' || base[index] == '-')
			return (0);
		else
		{
			tmp_index = index + 1;
			while (base[tmp_index])
			{
				if (base[index] == base[tmp_index])
					return (0);
				tmp_index++;
			}
		}
		index++;
	}
	if (index == 0 || index == 1)
		return (0);
	return (1);
}

void	print_nbr(long long int nbr, char *base)
{	
	int		index;
	char	arr[40];

	index = 0;
	while (nbr > 0)
	{
		arr[index] = base[nbr % find_index(base)];
		nbr = nbr / find_index(base);
		index++;
	}
	index = index - 1;
	while (index >= 0)
	{
		write(1, arr + index, 1);
		index--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long int	i;

	if (base_check(base))
	{
		if (nbr > 0)
			print_nbr(nbr, base);
		else if (nbr < 0)
		{
			write(1, "-", 1);
			i = nbr;
			i = i * -1;
			print_nbr(i, base);
		}
		else
			write(1, "0", 1);
	}
}
