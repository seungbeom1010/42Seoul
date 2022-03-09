/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghshi<donghshi@student.42seoul.kr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:50:53 by donghshi          #+#    #+#             */
/*   Updated: 2022/02/22 19:22:23 by donghshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

char	**make_origianl_matrix(t_opt *c, char *buf)
{
	char		**original_matrix;
	int			row;
	int			col;
	int			buf_i;

	original_matrix = make_char_matrix(c);
	row = -1;
	col = -1;
	buf_i = skip_first_fline(buf);
	while (++row < c->row_size)
	{
		col = -1;
		while (++col < c->col_size)
			original_matrix[row][col] = buf[buf_i++];
		buf_i++;
	}
	return (original_matrix);
}

int	**make_basic_matrix(t_opt *c, char **original_matrix)
{
	int		**basic_matrix;
	int		row;
	int		col;

	basic_matrix = make_int_matrix(c);
	row = -1;
	col = -1;
	while (++row < c->row_size)
	{
		col = -1;
		while (++col < c->col_size)
			basic_matrix[row][col] = change_c2i(c, original_matrix[row][col]);
	}
	return (basic_matrix);
}

t_opt	*make_two_matrix(char *buf, char ***ori_m, int ***basic_m)
{
	t_opt	*c;

	c = (t_opt *)malloc(sizeof(t_opt));
	if (!c)
		return (0);
	set_opt(buf, c);
	*ori_m = make_origianl_matrix(c, buf);
	*basic_m = make_basic_matrix(c, *ori_m);
	return (c);
}

t_opt	*make_two_matrix_std(char *buf, char ***ori_m, int ***basic_m)
{
	t_opt	*c;

	c = (t_opt *)malloc(sizeof(t_opt));
	if (!c)
		return (0);
	set_opt(buf, c);
	*ori_m = make_origianl_matrix(c, buf);
	*basic_m = make_basic_matrix(c, *ori_m);
	free(buf);
	return (c);
}

void	free_char_matrix(char **char_m, t_opt *c)
{
	int	row;

	row = -1;
	while (++row < c->row_size + 1)
		free(char_m[row]);
	free(char_m);
}
