/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:31:50 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/16 13:23:10 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		result = 1;
		while (power > 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}
