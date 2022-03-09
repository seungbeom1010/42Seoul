/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghshi <donghshi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 09:28:44 by donghshi          #+#    #+#             */
/*   Updated: 2022/02/23 09:59:30 by donghshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

int	check_if_newline(int *row_size, int *col_size, t_opt *c)
{
	(*row_size)++;
	if (*col_size != c->col_size)
		return (0);
	(*col_size) = 0;
	return (1);
}

int	check_map(char *buf, t_opt *c)
{
	int	i;
	int	row_size;
	int	col_size;

	i = 0;
	row_size = 0;
	col_size = 0;
	while (buf[i] && buf[i] != '\n')
		i++;
	while (buf[++i])
	{
		if (buf[i] == '\n')
		{
			if (!check_if_newline(&row_size, &col_size, c))
				return (0);
		}
		else
		{
			if (!check_map_char(c, buf[i]))
				return (0);
			col_size++;
		}
	}
	return (row_size == c->row_size);
}

int	check_all(char *buf)
{
	t_opt	c;

	if (!check_firstline(buf, &c))
		return (0);
	if (!check_col_size(buf, &c))
		return (0);
	if (!check_map(buf, &c))
		return (0);
	return (1);
}
