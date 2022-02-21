/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:43:44 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/22 01:45:20 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_count_if(char **tab, int lenght, int(*f)(char*))
{
    int     index;
    int     count;

    count = 0;
    index = 0;
    while (tab[index])
    {
        if ((*f)(tab[index] != 0)
            count++;
        index++;
    }
    return (count);
}
