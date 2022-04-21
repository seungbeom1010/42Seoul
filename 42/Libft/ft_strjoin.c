/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:50:57 by seunjang          #+#    #+#             */
/*   Updated: 2022/04/21 17:14:31 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	index;
	size_t	sub_index;

	if (!s1 || !s2)
		return (0);
	p = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!p)
		return (0);
	index = 0;
	sub_index = 0;
	while (s1[sub_index])
		p[index++] = s1[sub_index++];
	sub_index = 0;
	while (s2[sub_index])
		p[index++] = s2[sub_index++];
	p[index] = '\0';
	return (p);
}
