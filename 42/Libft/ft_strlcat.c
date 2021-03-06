/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:42:19 by seungbeom         #+#    #+#             */
/*   Updated: 2022/04/13 15:29:23 by seungbeom        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	start;
	size_t	index;
	size_t	dst_length;
	size_t	src_length;

	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	index = 0;
	start = ft_strlen(dst);
	if (dst_length < dstsize)
	{
		while (src[index] && start + 1 < dstsize)
			dst[start++] = src[index++];
		dst[start] = '\0';
		return (src_length + dst_length);
	}
	else
		return (src_length + dstsize);
}
