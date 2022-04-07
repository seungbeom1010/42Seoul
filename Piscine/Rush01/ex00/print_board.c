/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:28:41 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/13 19:29:59 by sohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_board(int (*board)[4])
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			temp = board[i][j] + '0';
			write(1, &temp, 1);
			if (j == 3)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			j++;
		}
		i++;
	}
}
