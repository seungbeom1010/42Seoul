/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 01:32:17 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/07 01:34:20 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void    ft_putstr(char *str)
{
    int a;

    a = 0;
    while (str[a] != '\0')
    {
        write(1, str + a, 1);
        a++;
    }
}

int main(void)
{
    ft_putstr("HI");
}
