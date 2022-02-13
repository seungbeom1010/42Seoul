/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:11:12 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/13 14:31:17 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_board(int (*board)[4], int *data);

int	check_rowcol(int (*board)[4], int row, int column, int num)
{
	int		i;
	int		j;

	i = 0;
	while (i < row)
	{
		if (board[i][column] == num)
			return (0);
		i++;
	}
	j = 0;
	while (j < column)
	{
		if (board[row][j] == num)
			return (0);
		j++;
	}
	return (1);
}

int	create_board(int (*board)[4], int row, int column, int *num)
{
	int		i;

	if (row == 4 && check_board(board, num))
		return (1);
	else if (row == 4)
		return (0);
	else if (column == 4)
		return (create_board(board, row + 1, 0, num));
	i = 1;
	while (i < 5)
	{
		board[row][column] = i;
		if (check_rowcol(board, row, column, i))
		{
			if (create_board(board, row, column + 1, num))
				return (1);
		}
		i++;
	}
	return (0);
}
