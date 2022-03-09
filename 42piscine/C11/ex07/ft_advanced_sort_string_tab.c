/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 02:10:57 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/22 02:17:50 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_advanced_sort_string_tab(char **tab, int(*cmp)(char*, char*))
{
    int     index;
    int     stop;
    char    *temp;

    stop = 1;
    while (stop)
    {
        stop = 0;
        index = 0;
        while (tab[index + 1])
        {
            if ((*cmp)(tab[index], tab[index + 1] > 0))
            {
                stop = 1;
                temp = tab[index];
                tab[index] = tab[index + 1];
                tab[index + 1] = temp;
            }
            index++;
        }
    }
}
