/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyelee <kyelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:09:58 by kyelee            #+#    #+#             */
/*   Updated: 2022/02/13 19:27:02 by sohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_colup(int (*board)[4], int *num)
{
	int	i;
	int	j;
	int	cnt;
	int	max_num;

	i = 0;
	while (i < 4)
	{
		cnt = 0;
		max_num = 0;
		j = 0;
		while (j < 4)
		{
			if (max_num < board[j][i])
			{
				max_num = board[j][i];
				cnt++;
			}
			j++;
		}
		if (cnt != num[i])
			return (0);
		i++;
	}
	return (1);
}

int	check_coldown(int (*board)[4], int *num)
{
	int	i;
	int	j;
	int	cnt;
	int	max_num;

	i = 0;
	while (i < 4)
	{
		cnt = 0;
		max_num = 0;
		j = 3;
		while (j >= 0)
		{
			if (max_num < board[j][i])
			{
				max_num = board[j][i];
				cnt++;
			}
			j--;
		}
		if (cnt != num[i + 4])
			return (0);
		i++;
	}
	return (1);
}

int	check_rowleft(int (*board)[4], int *num)
{
	int	i;
	int	j;
	int	cnt;
	int	max_num;

	i = 0;
	while (i < 4)
	{
		cnt = 0;
		max_num = 0;
		j = 0;
		while (j < 4)
		{
			if (max_num < board[i][j])
			{
				max_num = board[i][j];
				cnt++;
			}
			j++;
		}
		if (cnt != num[i + 8])
			return (0);
		i++;
	}
	return (1);
}

int	check_rowright(int (*board)[4], int *num)
{
	int	i;
	int	j;
	int	cnt;
	int	max_num;

	i = 0;
	while (i < 4)
	{
		cnt = 0;
		max_num = 0;
		j = 3;
		while (j >= 0)
		{
			if (max_num < board[i][j])
			{
				max_num = board[i][j];
				cnt++;
			}
			j--;
		}
		if (cnt != num[i + 12])
			return (0);
		i++;
	}
	return (1);
}

int	check_board(int (*board)[4], int *num)
{
	if (!check_colup(board, num))
		return (0);
	if (!check_coldown(board, num))
		return (0);
	if (!check_rowleft(board, num))
		return (0);
	if (!check_rowright(board, num))
		return (0);
	return (1);
}
