/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_charn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 02:48:46 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/22 02:52:25 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int     index;

    index = 0;
    while (str[index])
    {
        ft_putchar(str[index]);
        index++;
    }
}
