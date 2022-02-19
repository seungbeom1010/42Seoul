/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 14:58:06 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/19 21:49:30 by seunjang         ###   ########.fr       */
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
		while (in_charset(str[index], charset) == 0 && str[index])
		{
			size++;
			index++;
		}
		if (size != 0)
		{
			printf("%d\n", size);
			result[result_index] = (char *) malloc(sizeof(char) * (size + 1));
			result_index++;
		}
		while (in_charset(str[index], charset) && str[index])
			index++;
	}
	result[result_index] = (char *) malloc(sizeof(char) * 1);
	result[result_index] = "\0";
}

void	create_result(char *str, char *charset, char **result)
{
	int		index;
	int		sub_index;
	int		result_index;

	index = 0;
	result_index = 0;
	while (str[index])
	{
		sub_index = 0;
		while (in_charset(str[index], charset) == 0 && str[index])
		{
			result[result_index][sub_index] = str[index];
			sub_index++;
			index++;
		}
		if (sub_index != 0)
		{
			printf("%d, %d\n", result_index, sub_index);
			result[result_index][sub_index] = '\0';
		}
		while (in_charset(str[index], charset) && str[index])
			index++;
		result_index++;
		printf("%d\n", result_index);
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**result;

	result = (char **) malloc(sizeof(char) * word_count(str, charset) + 1);
	word_size(str, charset, result);
	create_result(str, charset, result);
	return (result);
}
