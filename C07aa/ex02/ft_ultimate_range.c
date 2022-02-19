/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:51:39 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/19 19:11:21 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*result;
	int		index;
	int		fixed_min;

	fixed_min = min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	result = (int *) malloc(sizeof(int) * (max - min));
	if (!result)
		return (0);
	index = 0;
	while (min < max)
	{
		result[index] = min;
		index++;
		min++;
	}
	*range = result;
	return (max - fixed_min);
}
