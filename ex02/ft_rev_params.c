/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:02:38 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/16 00:37:37 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    int     argv_index;
    int     sub_index;
    
    argv_index = argc - 1;
    while (argv_index > 0)
    {
        sub_index = 0;
        while (argv[argv_index][sub_index])
        {
            write(1, argv[argv_index] + sub_index, 1);
            sub_index++;
        }
        write(1, "\n", 1);
        argv_index--;
    }
}
