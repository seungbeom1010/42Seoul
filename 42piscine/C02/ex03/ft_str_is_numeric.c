/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:01:01 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/13 15:41:51 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
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
			if (str[index] >= '0' && str[index] <= '9')
				index++;
			else
				return (0);
		}
		return (1);
	}
}
