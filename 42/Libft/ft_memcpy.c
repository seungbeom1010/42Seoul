/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:46:42 by seungbeom         #+#    #+#             */
/*   Updated: 2022/04/12 22:36:01 by seungbeom        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dstc;
	unsigned char	*srcc;
	size_t			index;

	index = 0;
	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	index = 0;
	while (index < n)
	{
		dstc[index] = srcc[index];
		index++;
	}
	return (dst);
}
