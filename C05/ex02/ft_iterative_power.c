/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:31:01 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/16 01:35:37 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int     result;

    if (nb < 0)
        return (0);
    else if (nb == 0 && power == 0)
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
