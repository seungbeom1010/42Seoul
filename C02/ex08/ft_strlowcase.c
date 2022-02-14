/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:36:37 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/08 12:38:28 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	temp;
	int		index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			temp = str[index];
			str[index] = temp + 32;
		}
		index++;
	}
	return (str);
}
