/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 23:26:19 by seungbeom         #+#    #+#             */
/*   Updated: 2022/06/27 22:52:37 by seungbeom        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
	char	*init_content;

	node = (t_list *)malloc(sizeof(t_list));
	init_content = (char *)malloc(sizeof(char));
	if (!node || !init_content)
		return (NULL);
	node->fd = fd;
	init_content[0] = '\0';
	node->content = init_content;
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

void	ft_lstdel(int fd, t_list **head, t_list **real_node)
{
	t_list	*node;

	node = *head;
	if (node->next == NULL)
	{
		*head = NULL;
		free((*real_node)->content);
		free(*real_node);
		return ;
	}
	while (node->next)
	{
		if (node->next->fd == fd)
		{
			node->next = node->next->next;
			free((*real_node)->content);
			free(*real_node);
			break ;
		}
		node = node->next ;
	}
	return ;
}
