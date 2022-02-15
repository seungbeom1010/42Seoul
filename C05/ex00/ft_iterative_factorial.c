/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:16:49 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/16 01:26:35 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int ab)
{
    int     result;

    if (ab == 0 || ab == 1)
        return (1);
    else if (ab >= 2)
    {   
        result = 1;
        while (ab > 1)
        {
            result *= ab;
            ab--;
        }
        return (result);
    }
    else
        return (0);
}
