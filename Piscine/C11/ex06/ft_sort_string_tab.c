/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 02:19:05 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/22 02:25:39 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
    int     index;

    index = 0;
    while (s1[index] || s2[index])
    {
        if (s1[index] != s2[index])
            return (s1[index] - s2[index]);
        index++;
    }
    return (0);
}

void    ft_sort_string_tab(char **tab)
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
            if (ft_strcmp(tab[index], tab[index + 1] > 0))
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
