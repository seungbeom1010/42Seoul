/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghshi <donghshi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:00:20 by donghshi          #+#    #+#             */
/*   Updated: 2022/02/22 19:22:46 by donghshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

void	set_col(char *buf, t_opt *c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	i = skip_first_fline(buf);
	while (buf[i] && (buf[i] != '\n'))
	{
		i++;
		size++;
	}
	c->col_size = size;
}

void	set_opt(char *buf, t_opt *c)
{
	char	opt_row[100];
	char	opt_c[4];
	int		i;
	int		j;

	i = 0;
	j = 0;
	opt_c[3] = '\0';
	while (buf[i] && (buf[i] != '\n'))
		i++;
	opt_c[2] = buf[--i];
	opt_c[1] = buf[--i];
	opt_c[0] = buf[--i];
	j = -1;
	while (++j < i)
		opt_row[j] = buf[j];
	opt_row[++j] = '\0';
	c->row_size = ft_atoi(opt_row);
	c->empty_c = opt_c[0];
	c->hurdle_c = opt_c[1];
	c->fill_c = opt_c[2];
	set_col(buf, c);
}

char	**make_char_matrix(t_opt *c)
{
	char		**char_matrix;
	int			i;

	char_matrix = (char **)malloc(sizeof(char *) * (c->row_size + 1));
	if (!char_matrix)
		return (0);
	char_matrix[c->row_size] = 0;
	i = -1;
	while (++i < c->row_size)
	{
		char_matrix[i] = (char *)malloc(sizeof(char) * (c->col_size + 1));
		if (!char_matrix[i])
		{
			free_char_matrix(char_matrix, c);
			return (0);
		}
	}
	i = -1;
	while (++i < c->row_size)
		char_matrix[i][c->col_size] = '\0';
	return (char_matrix);
}

int	**make_int_matrix(t_opt *c)
{
	int	**int_matrix;
	int	i;

	int_matrix = (int **)malloc(sizeof(int *) * (c->row_size + 1));
	if (!int_matrix)
		return (0);
	int_matrix[c->row_size] = 0;
	i = -1;
	while (++i < c->row_size)
	{
		int_matrix[i] = (int *)malloc(sizeof(int) * (c->col_size + 1));
		if (!int_matrix[i])
		{
			free_int_matrix(int_matrix, c);
			return (0);
		}
	}
	i = -1;
	while (++i < c->row_size)
		int_matrix[i][c->col_size] = -1;
	return (int_matrix);
}

int	change_c2i(t_opt *c, char target)
{
	if (target == c->hurdle_c)
		return (0);
	else if (target == c->empty_c)
		return (1);
	else
		return (-1);
}
