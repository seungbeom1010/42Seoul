/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghshi <donghshi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:12:13 by donghshi          #+#    #+#             */
/*   Updated: 2022/02/23 11:50:12 by donghshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

void	print_result(char **result, t_opt *c)
{
	int	row;
	int	col;

	row = -1;
	col = -1;
	while (++row < c->row_size)
	{
		col = -1;
		while (++col < c->col_size)
		{
			write(1, &result[row][col], 1);
		}
		write(1, "\n", 1);
	}
}

void	print_error(void)
{
	write(2, "map error\n", 10);
}
