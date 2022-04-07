/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:36:31 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/16 13:35:20 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		index;

	if (nb <= 0)
		return (0);
	index = 1;
	while (index <= nb && index <= 46341)
	{
		if (index * index == nb)
			return (index);
		index++;
	}
	return (0);
}
