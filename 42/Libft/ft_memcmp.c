/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:16:01 by seunjang          #+#    #+#             */
/*   Updated: 2022/04/14 14:36:04 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*tmp_1;
	unsigned char	*tmp_2;

	tmp_1 = (unsigned char *)s1;
	tmp_2 = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (tmp_1[index] != tmp_2[index])
			return (tmp_1[index] - tmp_2[index]);
		index++;
	}
	return (0);
}
