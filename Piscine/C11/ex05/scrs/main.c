/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 02:40:06 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/22 02:40:56 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int main(int argc, char **argv)
{
    if (argc == 4)
        do_op(argv[1], argv[2], argv[3]);
}
