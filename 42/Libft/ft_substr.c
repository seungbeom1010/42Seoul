/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:43:19 by seungbeom         #+#    #+#             */
/*   Updated: 2022/04/19 22:07:59 by seungbeom        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	index;

	if (!s)
		return (0);
	index = 0;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (0);
	while (index < len)
	{
		p[index] = ((char *)(s + start))[index];
		index++;
	}
	return (p);
}
