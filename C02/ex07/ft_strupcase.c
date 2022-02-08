/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:26:59 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/08 10:47:01 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strupcase(char *str)
{   
    char    temp;
    int     index;

    index = 0;
    while (str[index])
    {
        if (str[index] >= 'a' && str[index] <= 'z')
        {
            temp = str[index];
            str[index] = temp - 32;
        }
        index++;
    }
    return (str);
}
