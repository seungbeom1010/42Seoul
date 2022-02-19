/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:37:24 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/19 11:58:19 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_index(char *base)
{
	int		index;

	index = 0;
	while (base[index])
		index++;
	return (index);
}

int	str_base(char c, char *base)
{
	int		index;

	index = 0;
	while (base[index])
	{
		if (c == base[index])
			return (index + 1);
		index++;
	}
	return (0);
}

int	check_base(char *base)
{
	int		index;
	int		tmp_index;

	index = 0;
	while (base[index])
	{
		if (base[index] == 32 || (base[index] >= 9 && base[index] <= 13))
			return (1);
		else if (base[index] == '+' || base[index] == '-')
			return (1);
		tmp_index = index + 1;
		while (base[tmp_index])
		{
			if (base[index] == base[tmp_index])
				return (1);
			tmp_index++;
		}
		index++;
	}
	if (index == 0 || index == 1)
		return (1);
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int		index;
	int		minus;
	int		result;

	result = 0;
	minus = 1;
	index = 0;
	if (check_base(base))
		return (0);
	while (str[index] == 32 || (str[index] >= 9 && str[index] <= 13))
		index++;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			minus *= -1;
		index++;
	}
	while (str_base(str[index], base))
	{
		result = result * find_index(base) + str_base(str[index], base) - 1;
		index++;
	}
	return (result * minus);
}
