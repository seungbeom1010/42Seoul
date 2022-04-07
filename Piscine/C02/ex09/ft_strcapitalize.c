/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:39:10 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/14 17:02:45 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nbr_up(char str)
{
	if ((str >= '0' && str <= '9') || (str >= 'A' && str <= 'Z'))
		return (1);
	return (0);
}

int	is_lower(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	return (0);
}

void	init_lower(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		index;

	init_lower(str);
	if (str[0] != '\0')
	{	
		if (is_lower(str[0]))
		{
			str[0] = str[0] - 32;
		}
		index = 1;
		while (str[index])
		{
			if (!(nbr_up(str[index - 1]) || is_lower(str[index - 1])))
			{
				if (is_lower(str[index]))
					str[index] = str[index] - 32;
			}
			index++;
		}
	}
	return (str);
}
