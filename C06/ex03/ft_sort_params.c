/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:38:39 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/16 01:11:17 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    sort_ascii(int argc, char *argv[])
{
    int             index;
    int             tmp_index;
    unsigned char   A;
    unsigned char   B;
    char            *tmp;

    index = 1;
    while (index < argc - 1)
    {
        tmp_index = 0;
        while (argv[index][tmp_index])
        {
            A = argv[index][tmp_index];
            B = argv[index + 1][tmp_index];
            if (A > B)
            {
                tmp = argv[index];
                argv[index] = argv[index + 1];
                argv[index + 1] = tmp;
                index = 1;      
            }
            else if (A < B)
                break ;
            else
                tmp_index++;
        }
        index++;
    }
}

int main(int argc, char *argv[])
{
    int     index;
    int     tmp_index;
    
    sort_ascii(argc, argv);
    index = 1;
    while (index < argc)
    {
        tmp_index = 0;
        while (argv[index][tmp_index])
        {
            write(1, argv[index] + tmp_index, 1);
            tmp_index++;
        }
        write(1, "\n", 1);
        index++;
    }
}
