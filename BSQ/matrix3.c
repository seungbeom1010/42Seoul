/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghshi<donghshi@student.42seoul.kr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:52:30 by donghshi          #+#    #+#             */
/*   Updated: 2022/02/22 18:55:08 by donghshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

void	free_int_matrix(int **int_m, t_opt *c)
{
	int	row;

	row = -1;
	while (++row < c->row_size + 1)
		free(int_m[row]);
	free(int_m);
}
