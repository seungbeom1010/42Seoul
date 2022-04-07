/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:45:03 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/17 16:43:09 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		index;
	char	*result;

	len = 0;
	while (src[len])
		len++;
	result = (char *) malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (0);
	index = 0;
	while (src[index])
	{
		result[index] = src[index];
		index++;
	}
	result[index] = '\0';
	return (result);
}
