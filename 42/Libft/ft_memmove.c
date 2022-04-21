/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:50:11 by seungbeom         #+#    #+#             */
/*   Updated: 2022/04/21 16:17:35 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			index;
	unsigned char	*dstc;
	unsigned char	*srcc;

	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (!dstc && !srcc)
		return (0);
	if (dstc > srcc)
	{
		while ((int)(--len) >= 0)
			dstc[len] = srcc[len];
	}
	else
	{
		index = -1;
		while (++index < len)
			dstc[index] = srcc[index];
	}
	return (dst);
}
