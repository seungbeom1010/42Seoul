/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 00:42:57 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/07 00:51:11 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

char    int_str(int start)
{
    char    c;

    c = start + '0';
    return (c);
}

void    print_number(char *arr, int n, int start, int index)
{
    if (n == index)
    {
        int head;

        head = 0;
        while (head < n)
        {
            write(1, arr + head, 1);
            head++;
        }
        if (arr[0] != int_str(10 - n))
        {
            write(1, ", ", 2);
        }
    }
    else
    {
        while (start <= 10 - n + index)
        {
            arr[index] = int_str(start);
            print_number(arr, n, start + 1, index + 1);
            start++;
        }       
    }
}

void    ft_print_combn(int n)
{
    char    arr[10];
    int start;
    int index;

    start = 0;
    index = 0;
    print_number(arr, n, start, index);
}

int main(void)
{
    ft_print_combn(4);
}
