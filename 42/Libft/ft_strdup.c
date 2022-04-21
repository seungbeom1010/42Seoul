/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:54:19 by seunjang          #+#    #+#             */
/*   Updated: 2022/04/19 20:22:15 by seungbeom        ###   ########.fr       */
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