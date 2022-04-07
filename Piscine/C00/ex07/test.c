/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:18:19 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/06 18:18:52 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int     nbr_digit(int nbr)
{
    int digit;

    digit = 1;
    while (nbr >= 10)
    {
        nbr = nbr / 10;
        digit *= 10;
    }
    return (digit);
}

void    print_number(int nbr)
{
    int digit;
    char print_value;

    digit = nbr_digit(nbr);
    while (nbr > 0)
    {
        print_value = nbr / digit + '0';
        write(1, &print_value, 1);
        nbr %= digit;
        digit /= 10;
    }
}

void    test(int nbr)
{
    if (nbr > 0)
    {
        print_number(nbr);
    }
    
    else if (nbr < 0)
    {
        write(1, "-", 1);
        print_number(nbr * -1);
    }
    else
    {
        write(1, "0", 1);
    }    
}
