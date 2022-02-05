/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:33:16 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/05 20:56:54 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int	find_digit(int nb)
{
	int		count;

	count = 0;
	while (nb > 10)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

int	multiple(int nb)
{
	int		calculated_number;

	calculated_number = 1;
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		while (nb > 0)
		{
			calculated_number = calculated_number * 10;
			nb--;
		}
		return (calculated_number);
	}
}

void	print_number(int nb)
{
	int		divide_number;
	char	answer;

	divide_number = multiple(find_digit(nb));
	while (nb > 0)
	{
		answer = nb / divide_number + '0';
		nb = nb - (nb / divide_number) * divide_number;
		write(1, &answer, 1);
		divide_number = divide_number / 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb > 0)
	{
		print_number(nb);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		print_number(nb * -1);
	}
	else
	{
		write(1, "0", 1);
	}
}

int	main(void)
{
	ft_putnbr(23123123);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-12);
	return (0);
}
