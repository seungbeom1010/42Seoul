/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:50:11 by seungbeom         #+#    #+#             */
/*   Updated: 2022/04/12 22:02:43 by seungbeom        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstc;
	unsigned char	*srcc;
	size_t			index;

	index = -1;
	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (dstc > srcc)
	{
		while ((int)(--len) >= 0)
			dstc[len] = srcc[len];
	}
	else
	{
		while (++index < len)
			dstc[index] = srcc[index];
	}
	return (dst);
}
