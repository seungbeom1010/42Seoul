/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 09:44:10 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/05 17:01:20 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char a, char b, char c)
{
	int	fixed_value;

	fixed_value = x;
	while (x > 0)
	{
		if (x == fixed_value)
		{
			ft_putchar(a);
		}
		else if (x == 1)
		{
			ft_putchar(b);
		}
		else
		{
			ft_putchar(c);
		}
		x--;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		if (y == 1)
		{
			print_line(x, '/', '\\', '*');
		}
		else
		{
			print_line(x, '/', '\\', '*');
			while (y > 2)
			{
				print_line(x, '*', '*', ' ');
				y--;
			}
			print_line(x, '\\', '/', '*');
		}
	}
}
