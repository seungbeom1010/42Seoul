/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:49:38 by seunjang          #+#    #+#             */
/*   Updated: 2022/05/16 20:39:09 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	check_newline(char *s, int c)
{
	int	index;

	index = 0;
	while (index < ft_strlen(s))
	{
		if (s[index] == (char)c)
			return (index);
		index++;
	}
	return (-1);
}

t_list	*ft_lstnew(void *content, int fd)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->fd = fd;
	new->content = content;
	new->next = NULL;
	return (new);
}


char	*ft_strdup(char *s1)
{
	char	*p;
	size_t	index;

	p = (char *)malloc(ft_strlen(s1) + 1);
	if (!p)
		return (0);
	index = 0;
	while (s1[index])
	{
		p[index] = s1[index];
		index++;
	}
	p[index] = '\0';
	return (p);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	index;
	size_t	sub_index;

	if (!s1 || !s2)
		return (0);
	p = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!p)
		return (0);
	index = 0;
	sub_index = 0;
	while (s1[sub_index])
		p[index++] = s1[sub_index++];
	sub_index = 0;
	while (s2[sub_index])
		p[index++] = s2[sub_index++];
	p[index] = '\0';
	return (p);
}
