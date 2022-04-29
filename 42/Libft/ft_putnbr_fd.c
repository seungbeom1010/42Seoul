/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:04:51 by seungbeom         #+#    #+#             */
/*   Updated: 2022/04/29 12:42:50 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit(int n)
{
	int		count;

	count = 1;
	while (n > 9)
	{
		n /= 10;
		count *= 10;
	}
	return (count);
}

void	ft_putnbr_fd(int n, int fd)
{
	size_t	len;
	char	temp;

	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	len = ft_digit(n);
	while (len > 0)
	{
		temp = n / len + '0';
		write(fd, &temp, 1);
		n %= len;
		len /= 10;
	}
}
