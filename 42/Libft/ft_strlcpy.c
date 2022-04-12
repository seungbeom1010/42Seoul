/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:04:24 by seungbeom         #+#    #+#             */
/*   Updated: 2022/04/12 22:26:39 by seungbeom        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_length;
	size_t	index;

	src_length = ft_strlen(src);
	if (dstsize != 0)
	{
		index = 0;
		while (src[index] && index + 1 < dstsize)
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (src_length);
}
