/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:51:40 by seunjang          #+#    #+#             */
/*   Updated: 2022/04/14 14:15:42 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;
	unsigned char	temp_c;
	unsigned char	*temp_s;

	temp_c = (unsigned char)c;
	temp_s = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (temp_s[index] == temp_c)
			return ((void *)(s + index));
		index++;
	}
	return (0);
}
