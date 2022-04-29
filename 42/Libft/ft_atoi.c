/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:59:57 by seunjang          #+#    #+#             */
/*   Updated: 2022/04/29 12:33:29 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t			index;
	int				sign;
	unsigned long	result;

	index = 0;
	sign = 1;
	result = 0;
	while ((9 <= str[index] && str[index] <= 13) || str[index] == 32)
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while ('0' <= str[index] && str[index] <= '9')
	{
		result = result * 10 + (str[index] - '0');
		index++;
	}
	if (result > 9223372036854775808U && sign == -1)
		return (0);
	if (result > 9223372036854775807 && sign == 1)
		return (-1);
	return ((int)result * sign);
}
