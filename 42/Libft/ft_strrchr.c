/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:50:11 by seunjang          #+#    #+#             */
/*   Updated: 2022/04/14 13:04:15 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = ft_strlen(s);
	while (0 <= index)
	{
		if (s[index] == (char)c)
			return ((char *)(s + index));
		index--;
	}
	return (0);
}
