/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:58:25 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/16 02:04:49 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
    int     index;
    int     count;
    
    if (nb <= 1)
        return (0);
    count = 0;
    index = 1;
    while (index <= nb / 2)
    {
       if (nb % index == 0)
          count++; 
       index++;
    }
    if (count > 1)
        return (0);
    return (1);
}
