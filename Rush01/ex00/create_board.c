/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:11:12 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/13 19:26:52 by sohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_board(int (*board)[4], int *num);

int	check_rowcol(int (*board)[4], int row, int column, int val)
{
	int		i;
	int		j;

	i = 0;
	while (i < row)
	{
		if (board[i][column] == val)
			return (0);
		i++;
	}
	j = 0;
	while (j < column)
	{
		if (board[row][j] == val)
			return (0);
		j++;
	}
	return (1);
}

int	create_board(int (*board)[4], int row, int column, int *num)
{
	int		val;

	if (row == 4 && check_board(board, num))
		return (1);
	else if (row == 4)
		return (0);
	else if (column == 4)
		return (create_board(board, row + 1, 0, num));
	val = 1;
	while (val < 5)
	{
		board[row][column] = val;
		if (check_rowcol(board, row, column, val))
		{
			if (create_board(board, row, column + 1, num))
				return (1);
		}
		val++;
	}
	return (0);
}
