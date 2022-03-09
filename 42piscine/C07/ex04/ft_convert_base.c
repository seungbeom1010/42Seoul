/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:24:18 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/19 21:08:57 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	find_index(char *base);
int	str_base(char c, char *base);
int	check_base(char *base);
int	ft_atoi_base(char *str, char *base);

int	size_arr(int temp, char *base_to)
{
	int		count;

	count = 0;
	while (temp > 0)
	{
		temp /= find_index(base_to);
		count++;
	}
	return (count);
}

char	*malloc_arr(int atoi, char *base_to)
{
	char			*result;
	long long int	temp;

	temp = atoi;
	if (temp > 0)
		result = (char *) malloc(sizeof(char) * size_arr(temp, base_to) + 1);
	else if (temp < 0)
	{
		temp = temp * -1;
		result = (char *) malloc(sizeof(char) * size_arr(temp, base_to) + 2);
	}
	else
		result = (char *) malloc(sizeof(char) * 2);
	return (result);
}

void	create_arr(int atoi, char *base_to, char *result)
{
	int				index;
	long long int	temp;

	if (atoi < 0)
	{
		result[0] = '-';
		temp = atoi * -1;
		result[size_arr(temp, base_to) + 1] = '\0';
		index = size_arr(temp, base_to);
	}
	else
	{
		temp = atoi;
		result[size_arr(temp, base_to)] = '\0';
		index = size_arr(atoi, base_to) - 1;
	}
	while (temp > 0)
	{
		result[index] = base_to[temp % find_index(base_to)];
		temp = temp / find_index(base_to);
		index--;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		atoi;

	if (check_base(base_to) == 0 && check_base(base_from) == 0)
	{
		atoi = ft_atoi_base(nbr, base_from);
		result = malloc_arr(atoi, base_to);
		if (!result)
			return (0);
		if (atoi != 0)
			create_arr(atoi, base_to, result);
		else
		{
			result[0] = '0';
			result[1] = '\0';
		}
		return (result);
	}
	result = 0;
	return (0);
}
