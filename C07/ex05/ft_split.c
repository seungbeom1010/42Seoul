/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:58:06 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/20 11:34:37 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	in_charset(char c, char *charset)
{
	int		index;

	index = 0;
	while (charset[index])
	{
		if (c == charset[index])
			return (1);
		index++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int		flag;
	int		index;
	int		size;

	flag = 1;
	size = 0;
	index = 0;
	while (str[index])
	{
		if (in_charset(str[index], charset))
		{
			if (flag == 0)
				size++;
			flag = 1;
		}
		else
			flag = 0;
		index++;
	}
	if (flag == 0)
		size++;
	return (size);
}

void	word_size(char *str, char *charset, char **result)
{
	int		index;
	int		result_index;
	int		size;

	index = 0;
	result_index = 0;
	while (str[index])
	{
		size = 0;
		while (in_charset(str[index], charset) && str[index])
			index++;
		if (str[index] == '\0')
			break ;
		while (in_charset(str[index], charset) == 0 && str[index])
		{
			size++;
			index++;
		}
		result[result_index] = (char *) malloc(sizeof(char) * (size + 1));
		result_index++;
	}
	result[result_index] = 0;
}

void	create_result(char *str, char *charset, char **result)
{
	int		idx;
	int		sub_idx;
	int		result_idx;

	idx = 0;
	result_idx = 0;
	while (str[idx])
	{
		sub_idx = 0;
		while (in_charset(str[idx], charset) && str[idx])
			idx++;
		if (str[idx] == '\0')
			break ;
		while (in_charset(str[idx], charset) == 0 && str[idx])
		{
			result[result_idx][sub_idx] = str[idx];
			sub_idx++;
			idx++;
		}
		result[result_idx][sub_idx] = '\0';
		result_idx++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**result;

	result = (char **) malloc(sizeof(char *) * word_count(str, charset) + 1);
	word_size(str, charset, result);
	create_result(str, charset, result);
	return (result);
}
