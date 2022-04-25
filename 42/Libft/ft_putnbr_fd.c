/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:04:51 by seungbeom         #+#    #+#             */
/*   Updated: 2022/04/24 21:17:22 by seungbeom        ###   ########.fr       */
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
		count++;
	}
	return (count);
}

void	ft_putnbr_fd(int n, int fd)
{
	size_t	len;

	if (n == -2147483648)
		len = 11;
	else if (n >= 0)
		len = ft_digit(n);
	else
		len = ft_digit(n * -1) + 1;
	write(fd, ft_itoa(n), len);
}
