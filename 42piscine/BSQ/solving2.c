/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solving2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghshi<donghshi@student.42seoul.kr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:55:27 by donghshi          #+#    #+#             */
/*   Updated: 2022/02/22 18:58:41 by donghshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

void	free_all(char *buf, int **s_m, char **o_m, t_opt *c)
{
	free(buf);
	free_int_matrix(s_m, c);
	free_char_matrix(o_m, c);
	free(c);
}

void	get_std_solution(char *buf)
{
	t_opt	*c;
	int		**sol_m;
	char	**ori_m;

	sol_m = 0;
	ori_m = 0;
	c = make_two_matrix_std(buf, &ori_m, &sol_m);
	sol_m = make_solution_matrix(sol_m, c);
	ori_m = turn_original2answer(sol_m, ori_m, c);
	print_result(ori_m, c);
	free_int_matrix(sol_m, c);
	free_char_matrix(ori_m, c);
	free(c);
}
