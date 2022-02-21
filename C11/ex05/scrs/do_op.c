/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 02:53:24 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/22 03:08:15 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int get_operator(char *op)
{
    int     index;
    char    *op_list;

    op_list = "+-/*%";
    index = 0;
    while (op_list[index])
    {
        if (op_list[index] == op[0] && op[1] == '\0')
            return (index);
        index++;
    }
    return (-1);
}

int check_argv(char *nbr1, char *nbr2, int op_index)
{
    int     A;
    int     B;

    A = ft_atoi(nbr1);
    B = ft_atoi(nbr2);
    if ((op_index == 2 || op_index == 4) && B == 0)
    {
        if (op_index == 2)
            ft_putstr("Stop : division by zero");
        else
            ft_putstr("Stop : modulo by zero");
        return (0);
    }
    else
        return (1);
}

void do_op(char *nbr1, char *op, char *nbr2)
{
    int     (*fp[5])(int, int);
    int     op_index;
    int     A;
    int     B;

    fp[0] = add;
    fp[1] = sub;
    fp[2] = div;
    fp[3] = mul;
    fp[4] = mod;
    op_index = get_operator(op);
    if (op_index != -1)
    {
        if (check_argv(nbr1, nbr2, op_index))
            A = ft_atoi(nbr1);
            B = ft_atoi(nbr2);
            ft_putnbr(fp[op_index](A, B));
        ft_putchar('\n');
    }
    else
    {
        ft_putnbr(0);
        ft_putchar('\n');
    }
}
