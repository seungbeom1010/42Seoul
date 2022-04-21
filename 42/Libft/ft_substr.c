/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:43:19 by seungbeom         #+#    #+#             */
/*   Updated: 2022/04/21 17:59:46 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	index;

	if (!s)
		return (0);
	if (ft_strlen(s) <= start)
		len = 0;
	index = 0;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (0);
	while (index < len)
	{
		p[index] = ((char *)(s + start))[index];
		index++;
	}
	p[index] = '\0';
	return (p);
}
