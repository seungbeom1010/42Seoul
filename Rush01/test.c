
#include <unistd.h>

int		row_arr[5][5];
int		col_arr[5][5];

int		verif_argv(char *arr, int *data)
{
	int		count;
	int		index;

	count = 0;
	index = 0;
	while (count < 16 && arr[index] != '\0')
	{
		if (index % 2 == 0)
		{
			if (arr[index] < '1' || arr[index] > '4')
				return (1);
			else
			{
				*data++ = arr[index] - '0';
				count++;
			}
		}
		else if (arr[index] != 32 && (arr[index] < 9 || arr[index] > 13))
			return (1);
		index++;
	}
	if (count == 16 && index == 31)
		return (0);
	else
		return (1);
}

int		verification(int argc, char *argv[], int *data)
{
	if (argc != 2)
		return (1);
	else if (verif_argv(argv[1], data))
		return (1);
	else
		return (0);
}

void	init_set(void)
{
	int		index1;
	int		index2;

	index1 = 0;
	while (index1 < 5)
	{
		index2 = 0;
		while (index2 < 5)
		{
			row_arr[index1][index2] = 0;
			col_arr[index1][index2] = 0;
			index2++;
		}
		index1++;
	}
}
int	verif_down(int (*board)[5], int *data)
{
	int		index1;
	int		index2;
	int		count;
	int		latest_high;

	index1 = 1;
	while (index1 < 5)
	{
		count = 0;
		latest_high = 0;
		index2 = 1;
		while (index2 < 5)
		{
			if (latest_high < board[index2][index1])
			{
				latest_high = board[index2][index1];
				count++;
			}
			index2++;
		}
		if (count != data[index1 - 1] && data[index1 - 1] != 0)
			return (0);
		index1++;
	}
	return (1);
}

int	verif_up(int (*board)[5], int *data)
{
	int		index1;
	int		index2;
	int		count;
	int		latest_high;

	index1 = 1;
	while (index1 < 5)
	{
		count = 0;
		latest_high = 0;
		index2 = 1;
		while (index2 < 5)
		{
			if (latest_high < board[5 - index2][index1])
			{
				latest_high = board[5 - index2][index1];
				count++;
			}
			index2++;
		}
		if (count != data[index1 + 3] && data[index1 + 3] != 0)
			return (0);
		index1++;
	}
	return (1);
}

int	verif_right(int (*board)[5], int *data)
{
	int		index1;
	int		index2;
	int		count;
	int		latest_high;

	index1 = 1;
	while (index1 < 5)
	{
		count = 0;
		latest_high = 0;
		index2 = 1;
		while (index2 < 5)
		{
			if (latest_high < board[index1][index2])
			{
				latest_high = board[index1][index2];
				count++;
			}
			index2++;
		}
		if (count != data[index1 + 7] && data[index1 + 7] != 0)
			return (0);
		index1++;
	}
	return (1);
}

int	verif_left(int (*board)[5], int *data)
{
	int		index1;
	int		index2;
	int		count;
	int		latest_high;

	index1 = 1;
	while (index1 < 5)
	{
		count = 0;
		latest_high = 0;
		index2 = 1;
		while (index2 < 5)
		{
			if (latest_high < board[index1][5 - index2])
			{
				latest_high = board[index1][5 - index2];
				count++;
			}
			index2++;
		}
		if (count != data[index1 + 11] && data[index1 - 1] != 0)
			return (0);
		index1++;
	}
	return (1);
}

int	verif_condition(int (*board)[5], int *data)
{
	if (!verif_down(board, data))
		return (0);
	if (!verif_up(board, data))
		return (0);
	if (!verif_right(board, data))
		return (0);
	if (!verif_left(board, data))
		return (0);
	return (1);
}
void	set_board(int (*board)[5], int row, int col, int nbr)
{
	board[row][col] = nbr;
	row_arr[row][nbr] = 1;
	col_arr[col][nbr] = 1;
}

void	reset(int row, int col, int nbr)
{
	row_arr[row][nbr] = 0;
	col_arr[col][nbr] = 0;
}

int	create_board(int (*board)[5], int row, int col, int *data)
{
	int		temp_nbr;

	if (row == 5 && verif_condition(board, data))
		return (1);
	else if (row == 5)
		return (0);
	else if (col == 5)
		return (create_board(board, row + 1, 1, data));
	else
	{
		temp_nbr = 0;
		while (++temp_nbr < 5)
		{
			if (row_arr[row][temp_nbr] || col_arr[col][temp_nbr])
				continue;
			set_board(board, row, col, temp_nbr);
			if (create_board(board, row, col + 1, data))
				return (1);
			reset(row, col, temp_nbr);
		}
	}
	return (0);
}

void	print_board(int (*board)[5])
{
	int		index1;
	int		index2;

	index1 = 1;
	while (index1 < 5)
	{
		index2 = 1;
		while (index2 < 5)
		{
			board[index1][index2] += '0';
			write(1, &board[index1][index2], 1);
			if (index2 == 4)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			index2++;
		}
		index1++;
	}
}

int	main(int argc, char *argv[])
{
	int		data[16];
	int		board[5][5];

	if (verification(argc, argv, data))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	init_set();
	if (create_board(board, 1, 1, data))
		print_board(board);
	else
		write(1, "Error\n", 6);
}
