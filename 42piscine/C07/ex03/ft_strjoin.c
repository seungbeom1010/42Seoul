/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:48:21 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/19 19:21:36 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	size_str(char *str)
{
	int		index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	size_ar(int size, char **strs, char *sep)
{
	int		index;
	int		sub_index;
	int		len;

	len = 0;
	index = 0;
	while (index < size)
	{
		sub_index = 0;
		while (strs[index][sub_index])
			sub_index++;
		len += sub_index + size_str(sep);
		index++;
	}
	len = len - size_str(sep);
	if (size == 0)
		return (0);
	return (len);
}

void	create_sep(char *result, char *sep, int	*result_index)
{
	int		sep_index;

	sep_index = 0;
	while (sep[sep_index])
	{
		result[*result_index] = sep[sep_index];
		sep_index++;
		(*result_index)++;
	}
}

void	create_ar(char *result, int size, char **strs, char *sep)
{
	int		index;
	int		sub_index;
	int		result_index;

	index = 0;
	result_index = 0;
	while (index < size)
	{
		sub_index = 0;
		while (strs[index][sub_index])
		{
			result[result_index] = strs[index][sub_index];
			sub_index++;
			result_index++;
		}
		if (index + 1 != size)
			create_sep(result, sep, &result_index);
		index++;
	}
	result[result_index] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;

	result = (char *) malloc(sizeof(char) * (size_ar(size, strs, sep) + 1));
	if (result == 0)
		return (0);
	create_ar(result, size, strs, sep);
	return (result);
}
