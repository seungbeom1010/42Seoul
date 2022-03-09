/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghshi <donghshi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:56:36 by donghshi          #+#    #+#             */
/*   Updated: 2022/02/22 18:15:39 by donghshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

char	*get_standard_input(void)
{
	int		fd;
	int		i;
	char	c;
	char	*buf;

	fd = 0;
	i = 0;
	buf = (char *)malloc(sizeof(char) * BUF_SIZE);
	if (!buf)
		return (0);
	while (read(fd, &c, 1))
		buf[i++] = c;
	buf[i] = '\0';
	return (buf);
}
