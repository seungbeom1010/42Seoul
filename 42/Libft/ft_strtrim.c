/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:15:08 by seunjang          #+#    #+#             */
/*   Updated: 2022/04/22 17:19:51 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_index;
	size_t	end_index;

	if (!s1 || !set)
		return (0);
	start_index = 0;
	while (s1[start_index] && ft_strchr(set, s1[start_index]))
		start_index++;
	end_index = ft_strlen(s1) - 1;
	while (end_index > start_index && ft_strchr(set, s1[end_index]))
		end_index--;
	return (ft_substr(s1, start_index, end_index - start_index + 1));
}
