/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:24:59 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/12 20:36:02 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		row_arr[5][5];
int		col_arr[5][5];

void	init_set(void)
{
	int		index1;
	int 	index2;

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

int	main(int argc, char *argv[])
{
	int		board_condition[16];
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
