/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:14:50 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/07 15:24:22 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putstr(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, str + index, 1);
		index++;
	}
}
