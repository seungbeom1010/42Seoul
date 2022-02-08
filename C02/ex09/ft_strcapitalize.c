/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:47:58 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/08 11:19:04 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     is_number(char str)
{
    if (str >= '0' && str <= '9')
        return (1);
    return (0);
}

int     is_lower(char str)
{
    if (str >= 'a' && str <= 'z')
        return (1);
    return(0);
}

int     is_upper(char str)
{
    if (str >= 'A' && str <= 'Z')
        return (1);
    return(0);
}

char    *ft_strcapitalize(char *str)
{
    int     index;
     
    if (is_lower(str[0]))
    {
        str[0] = str[0] - 32;
    }
    
    index = 1;
    while (str[index])
    {
        if (!(is_number(str[index - 1]) || is_lower(str[index - 1]) || is_upper(str[index - 1])))
        {
            if (is_lower(str[index]))
                str[index] = str[index] - 32;
        }
        index++;
    }
    return (str);
}
