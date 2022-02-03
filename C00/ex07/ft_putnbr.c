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

void	print_number(int num)
{
	while (num > 0)
	{
		char a;

		a = num / 10 + 15;
		write(1, &a, 1);
		num = num % 10;
	}	

}

void	ft_putnbr(int nb)
{
	print_number(nb);
}

int 	main(void)
{
	ft_putnbr(42);
}
