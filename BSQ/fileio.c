/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileio.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghshi <donghshi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:36:19 by donghshi          #+#    #+#             */
/*   Updated: 2022/02/22 18:44:39 by donghshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "my_lib.h"

#include <stdio.h>

char	*open_file(char *filename)
{
	char	*buf;
	int		size;
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = (char *)malloc(sizeof(char) * BUF_SIZE);
	if (!buf)
		return (0);
	size = read(fd, buf, BUF_SIZE);
	close(fd);
	if (size <= 0)
		return (0);
	buf[size] = '\0';
	return (buf);
}

int	skip_first_fline(char *buf)
{
	int	i;

	i = 0;
	while (buf[i] && (buf[i] != '\n'))
		i++;
	i++;
	return (i);
}
