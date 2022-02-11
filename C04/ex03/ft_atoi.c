/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 00:16:29 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/11 00:39:59 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int     index;
    int     sign;
    int     answer;

    index = 0;
    sign = 1;
    answer = 0;
    while (str[index] == 32 || (str[index] >= 9 && str[index] <= 13))
        index++;
    while (str[index] == '-' || str[index] == '+')
    {
        if (str[index] == '-')
            sign *= -1;
        index++;
    }
    while (str[index] >= '0' && str[index] <= '9')
    {
        answer = answer * 10 + str[index] - '0';
        index++;
    }
    return (answer * sign);
}
