/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 23:34:05 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/22 01:34:37 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_foreach(int *tab, int length, void(*f)(int))
{
    int     index;

    index = 0;
    while (index < length)
    {
        (*f)(tab[index]);
        index++;
    }
}
