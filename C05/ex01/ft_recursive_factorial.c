/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:27:11 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/16 01:30:17 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    int     result;

    if (nb == 1 || nb == 0)
        return (1);
    else if (nb > 1)
        return (nb * ft_recursive_factorial(nb - 1);
    else
        return (0);
}
