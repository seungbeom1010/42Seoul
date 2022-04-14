/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:36:18 by seunjang          #+#    #+#             */
/*   Updated: 2022/04/14 16:04:18 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			index;
	unsigned char	*tmp_h;
	unsigned char	*tmp_n;

	tmp_h = (unsigned char *)haystack;
	tmp_n = (unsigned char *)needle;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	index = 0;
	while (tmp_h[index] && index < len)
	{
		if (tmp_h[index] == tmp_n[index])
		{
			if (tmp_n[index + 1] == '\0')
				return ((char *)(tmp_h + index - ft_strlen(needle)));
			index++;
		}		
	}
	return (0);
}
