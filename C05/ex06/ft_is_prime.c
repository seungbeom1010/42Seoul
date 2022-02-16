/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:37:47 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/16 20:54:58 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		index;
	int		count;

	if (nb <= 1)
		return (0);
	count = 0;
	index = 2;
	while (index < nb && index <= 46341)
	{
		if (nb % index == 0)
			count++;
		if (count > 0)
			return (0);
		index++;
	}
	return (1);
}
