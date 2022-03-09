/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:42:21 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/17 16:44:14 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*result;
	int		index;

	if (min >= max)
		return (0);
	result = (int *) malloc(sizeof(int) * (max - min));
	index = 0;
	while (min < max)
	{
		result[index] = min;
		index++;
		min++;
	}
	return (result);
}
