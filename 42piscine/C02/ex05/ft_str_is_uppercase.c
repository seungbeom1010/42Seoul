/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:49:29 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/13 18:31:15 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		index;

	if (str[0] == '\0')
	{
		return (1);
	}
	else
	{
		index = 0;
		while (str[index])
		{
			if (str[index] >= 'A' && str[index] <= 'Z')
				index++;
			else
				return (0);
		}
		return (1);
	}
}
