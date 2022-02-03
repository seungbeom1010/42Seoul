/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:33:16 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/03 20:07:55 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int find_digit(int nb)
{
	int count = 0;
	while (nb >= 10)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

int multiple(int nb)
{
	int calculated_number = 1;
	int digit = find_digit(nb);
	
	if (digit == 0)
	{
		return (1);
	}
	else
	{
		while (digit > 0)
		{
			calculated_number = calculated_number * 10;
			digit--;
		}
		return (calculated_number);
	}
}

void print_number(int nb)
{
	int digit_nbr = multiple(nb);
	char c;
	
	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		while (nb > 0)
		{
			c = nb / digit_nbr + '0';
			nb = nb - (nb / digit_nbr) * digit_nbr;
			write(1, &c, 1);
			digit_nbr = digit_nbr / 10;
		}
	}
}

void ft_putnbr(int nb)
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
