/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 01:38:45 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/07 01:48:07 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void    ft_rev_int_tab(int *tab, int size)
{   
    int temp;
    int start;
    
    start = 0;
    while (start < size / 2)
    {
        temp = tab[start];
        tab[start] = tab[size - start - 1];
        tab[size - start - 1] = temp;
        start++;
    }
    
    int trial = 0;

    while (trial < size)
    {
        printf("%d\n", tab[trial]);
        trial++;
    }
}

int main(void)
{
    int tab[] = {1, 2, 3, 6, 9};
    int size = 5;

    ft_rev_int_tab(tab, size);
}

