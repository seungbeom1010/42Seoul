/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:36:18 by seunjang          #+#    #+#             */
/*   Updated: 2022/04/18 16:59:30 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	sub_index;

	if (needle[0] == '\0')
		return ((char *)haystack);
	index = 0;
	while (haystack[index] && len > index)
	{
		sub_index = 0;
		while (haystack[index + sub_index] == needle[sub_index] && \
		len > index + sub_index)
		{
			sub_index++;
			if (needle[sub_index] == '\0')
				return ((char *)(haystack + index));
		}
		index++;
	}
	return (0);
}
