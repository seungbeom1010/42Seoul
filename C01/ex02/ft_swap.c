/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 00:57:35 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/07 01:30:28 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void    ft_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;

    printf("temp 값: %d, a 값: %d, b 값: %d\n", temp, *a, *b);
}

int main(void)
{
    int a = 1;
    int b = 2;

    ft_swap(&a, &b);
}

