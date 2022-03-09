/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohlee <sohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:26:04 by sohlee            #+#    #+#             */
/*   Updated: 2022/02/13 19:28:18 by sohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_board(int (*board)[4]);
int		check_error(int argc, char *argv[], int *num);
int		check_board(int (*board)[4], int *num);
int		create_board(int (*board)[4], int row, int column, int *num);

void	init_board(int (*board)[4])
{
	int	a;
	int	b;

	a = 0;
	while (a < 4)
	{
		b = 0;
		while (b < 4)
		{
			board[a][b] = 0;
			b++;
		}
		a++;
	}
}

int	main(int argc, char *argv[])
{
	int	num[16];
	int	board[4][4];

	if (check_error(argc, argv, num))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	init_board(board);
	if (create_board(board, 0, 0, num))
		print_board(board);
	else
		write(1, "Error\n", 6);
}
