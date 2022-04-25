/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:03:19 by seungbeom         #+#    #+#             */
/*   Updated: 2022/04/24 21:11:28 by seungbeom        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	index;

	index = 0;
	while (s[index])
	{
		write(fd, s + index, 1);
		index++;
	}
	write(fd, "\n", 1);
}
