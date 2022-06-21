/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 23:26:19 by seungbeom         #+#    #+#             */
/*   Updated: 2022/06/21 18:45:30 by seungbeom        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *s)
{
	int		index;

	index = 0;
	while (s[index])
		index++;
	return (index);
}

t_list	*ft_lstnew(int fd)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->fd = fd;
	node->content = NULL;
	node->next = NULL;
	return (node);
}

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = ft_strlen(s);
	while (0 <= index)
	{
		if (s[index] == (char)c)
			return ((char *)(s + index));
		index--;
	}
	return (0);
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

void	ft_lstdel(int fd, t_list **head)
{
	t_list	*node;

	node = *head;
	if (node->next == NULL)
	{
		*head = NULL;
		free(node->content);
		free(node);
		return ;
	}
	while (!(node->next->next))
	{
		if (node->next->fd == fd)
			break ;
		node = node->next;
	}
	node = node->next->next;
	free(node->next->content);
	free(node->next);
	return ;
}
