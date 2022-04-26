/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 21:00:09 by seungbeom         #+#    #+#             */
/*   Updated: 2022/04/26 13:56:21 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	index;

	if (!s)
		return ;
	index = 0;
	while (s[index])
	{
		write(fd, s + index, 1);
		index++;
	}
}
