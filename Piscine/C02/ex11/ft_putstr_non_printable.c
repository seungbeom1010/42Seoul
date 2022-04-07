/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:07:28 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/13 18:30:29 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex(unsigned char str)
{
	char	s1;
	char	s2;
	char	*base;

	base = "0123456789abcdef";
	s1 = base[str / 16];
	s2 = base[str % 16];
	ft_putchar('\\');
	ft_putchar(s1);
	ft_putchar(s2);
}

void	ft_putstr_non_printable(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 32 && str[index] <= 126)
			ft_putchar(str[index]);
		else
			hex(str[index]);
		index++;
	}
}
