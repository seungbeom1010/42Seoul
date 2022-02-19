/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:24:18 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/19 20:03:28 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	find_index(char *base);
int	str_base(char c, char *base);
int	check_base(char *base);
int	ft_atoi_base(char *str, char *base);

int	size_arr(int nbr, char *base_to)
{
	int		count;

	count = 0;
	while (nbr < 0)
	{
		nbr /= find_index(base_to);
		count++;
	}
	while (nbr > 0)
	{
		nbr /= find_index(base_to);
		count++;
	}
	return (count);
}

void	create_arr(long long int nbr, char *base_to, char *result)
{
	int		index;

	if (nbr < 0)
	{
		result[0] = '-';
		index = size_arr(-nbr, base_to);
		nbr *= -1;
	}
	else
		index = size_arr(nbr, base_to) - 1;
	while (nbr > 0)
	{
		result[index] = base_to[nbr % find_index(base_to)];
		nbr = nbr / find_index(base_to);
		index--;
	}
}

char	*malloc_arr(int atoi, char *base_to)
{
	char	*result;

	if (atoi > 0)
		result = (char *) malloc(sizeof(char) * size_arr(atoi, base_to) + 1);
	else if (atoi < 0)
		result = (char *) malloc(sizeof(char) * size_arr(atoi, base_to) + 2);
	else
		result = (char *) malloc(sizeof(char) * 2);
	if (!result)
		return (0);
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		atoi;

	atoi = ft_atoi_base(nbr, base_from);
	result = malloc_arr(atoi, base_to);
	if (check_base(base_to) == 0 && check_base(base_from) == 0)
	{
		if (atoi > 0)
			create_arr(atoi, base_to, result);
		else if (atoi < 0)
			create_arr(atoi, base_to, result);
		else
		{
			result[0] = '0';
			result[1] = '\0';
		}
		return (result);
	}
	return (0);
}
