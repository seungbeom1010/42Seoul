/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:45:57 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/22 01:52:59 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
    int     index;
    int     sort;
    int     rev;

    index = 0;
    sort = 0;
    rev = 0;
    while (index < length - 1)
    {
        if ((*f)(tab[index], tab[index + 1]) <= 0)
            sort++;
        if ((*f)(tab[index], tab[index + 1]) >= 0)
            rev++;
        index++;
    }
    if (sort == index || rev == index)
        return (1);
    return (0);
}
