/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:48:02 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/16 02:00:45 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
    int     index;
    
    if (nb == 1)
        return (1);
    else if (nb < 0)
        return (0);
    index = 1;
    while (nb / 2 >= index)
    {
        if (index * index == nb)
            return (index);
        index++;
    }
    return (0);
}
