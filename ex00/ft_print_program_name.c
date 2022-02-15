/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:51:41 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/15 23:53:46 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    int     index;

    index = 0;
    while (argv[0][index])
    {
        write(1, argv[0] + index, 1);
        index++;
    }
    return (0);
}
