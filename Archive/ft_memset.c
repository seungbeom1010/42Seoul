/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:47:08 by seunjang          #+#    #+#             */
/*   Updated: 2022/03/11 17:02:52 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	unsigned char	change;	
	size_t			index;

	s = (unsigned char *)b;
	change = (unsigned char)c;
	index = 0;
	while (s[index] && index < len)
		s[index++] = change;
	return ((void *)s);
}
