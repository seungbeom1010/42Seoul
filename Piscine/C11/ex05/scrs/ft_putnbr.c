/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:49:20 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/22 03:10:57 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	nbr_digit(long long int nbr)
{
	int		digit;

	digit = 1;
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		digit *= 10;
	}
	return (digit);
}

void	print_number(long long int nb)
{
	int		digit;
	char	print_value;

	digit = nbr_digit(nb);
	while (digit > 0)
	{
		print_value = nb / digit + '0';
		write(1, &print_value, 1);
		nb %= digit;
		digit /= 10;
	}
}

void	ft_putnbr(int nb)
{
	long long int	i;

	if (nb > 0)
	{
		print_number(nb);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		i = nb;
		i = i * -1;
		print_number(i);
	}
	else
	{
		write(1, "0", 1);
	}
}
