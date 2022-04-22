/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 12:33:44 by seunjang          #+#    #+#             */
/*   Updated: 2022/04/22 16:43:26 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordsize(char const *s, char c)
{
	size_t	index;
	size_t	count;
	size_t	flag;

	index = 0;
	count = 0;
	flag = 1;
	while (s[index])
	{
		if (s[index] != c && flag == 1)
		{
			count++;
			flag = 0;
		}
		else if (s[index] == c)
			flag = 1;
		index++;
	}
	return (count);
}

static int	ft_wordcount(char const *s, char c)
{
	size_t	index;

	index = 0;
	if (s[index] == c)
		return (1);
	while (s[index] && s[index] != c)
		index++;
	return (index);
}

static char	*ft_wordset(char const *s, char c)
{
	char	*temp;
	size_t	index;

	temp = (char *)malloc(sizeof(char) * (ft_wordcount(s, c) + 1));
	if (!temp)
		return (0);
	index = 0;
	while (s[index] && s[index] != c)
	{
		temp[index] = s[index];
		index++;
	}
	temp[index] = '\0';
	return (temp);
}

static char	**ft_wordfree(char **result, size_t result_index)
{
	while (result_index >= 0)
	{
		free(result[result_index]);
		result_index--;
	}
	free(result);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	index;
	size_t	result_index;

	if (!s)
		return (0);
	result = (char **)malloc(sizeof(char *) * (ft_wordsize(s, c) + 1));
	if (!result)
		return (0);
	index = 0;
	result_index = 0;
	while (s[index])
	{
		if (s[index] != c)
		{
			result[result_index] = ft_wordset(s + index, c);
			if (!(result[result_index]))
				return (ft_wordfree(result, result_index));
			result_index++;
		}
		index += ft_wordcount(s + index, c);
	}
	result[result_index] = 0;
	return (result);
}
