/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:35:59 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/22 01:38:23 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_map(int *tab, int length, int(*f)(int))
{
    int     index;
    int     *result;

    result = (int *) malloc(sizeof(int) * length);
    if (!result)
        return (0);
    index = 0;
    while (index < length)
    {
        result[index] = (*f)(tab[index]);
        index++;
    }
    return (result);
}
