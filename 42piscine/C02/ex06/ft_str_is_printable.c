/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:49:29 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/13 15:44:53 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		index;

	if (str[0] == '\0')
	{
		return (1);
	}
	else
	{
		index = 0;
		while (str[index] != '\0')
		{
			if (str[index] >= 32 && str[index] <= 126)
				index++;
			else
				return (0);
		}
		return (1);
	}
}
