/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:57:01 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/15 23:59:51 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    int     argv_index;
    int     sub_index;

    argv_index = 1;
    while (argv_index < argc)
    {
        sub_index = 0;
        while (argv[argv_index][sub_index])
        {
            write(1, argv[argv_index] + sub_index, 1);
            sub_index++;
        }
        write(1, "\n", 1);
        argv_index++;
    }
}
