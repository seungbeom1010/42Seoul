/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:57:41 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/16 18:42:06 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int		index;

	if (nb <= 2)
		return (2);
	index = 2;
	while (index < nb && index < 46341)
	{
		if (nb % index == 0)
		{
			nb++;
			index = 2;
			continue ;
		}
		index++;
	}
	return (nb);
}
