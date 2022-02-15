/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:36:10 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/16 01:42:12 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
    if (nb < 0)
        return (0);
    else if (power == 0 && nb == 0)
        return (1);
    else if (power == 1)
        return (nb);
    else
        return (nb * ft_recursive_power(nb, power - 1);
}
