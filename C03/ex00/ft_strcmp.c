/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:17:50 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/09 18:39:06 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] > s2[index])
		{
			return (1);
		}
		else if (s1[index] < s2[index])
		{
			return (-1);
		}
		else
		{
			index++;
			if (s1[index] == '\0')
				return (0);
		}
	}
	return (0);
}
