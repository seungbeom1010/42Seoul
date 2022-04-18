/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:54:19 by seunjang          #+#    #+#             */
/*   Updated: 2022/04/18 18:04:15 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		index;

	p = (char *)malloc(ft_strlen(s1) + 1);
	if (!p)
		return (0);
	index = 0;
	while (s1[index])
	{
		p[index] = s1[index];
		index++;
	}
	p[index] = '\0';
	return (p);
}
