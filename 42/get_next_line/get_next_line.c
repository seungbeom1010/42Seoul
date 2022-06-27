/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 23:25:23 by seungbeom         #+#    #+#             */
/*   Updated: 2022/06/27 22:51:57 by seungbeom        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	*ft_node(t_list **head, int fd)
{
	t_list		*node;

	if (*head == NULL)
	{
		node = ft_lstnew(fd);
		*head = node;
		return (node);
	}
	node = *head;
	while (node)
	{
		if (node->fd == fd)
			return (node);
		if (!(node->next))
		{
			node->next = ft_lstnew(fd);
			return (node->next);
		}
		node = node->next;
	}
	return (node);
}

char	*ft_content(char *content, int fd)
{
	char	*buf;
	char	*temp;
	int		buf_size;

	buf_size = 1;
	while (buf_size > 0)
	{
		if (ft_strrchr(content, '\n'))
			break ;
		buf = (char *)malloc(BUFFER_SIZE + 1);
		if (!buf)
			return (NULL);
		buf_size = read(fd, buf, BUFFER_SIZE);
		if (buf_size == -1)
		{
			free(content);
			return (NULL);
		}
		buf[buf_size] = '\0';
		temp = ft_strjoin(content, buf);
		free(content);
		free(buf);
		content = temp;
	}
	return (content);
}

char	*ft_line(char *content)
{
	int		index;
	char	*line;

	index = 0;
	line = (char *)malloc(ft_strlen(content) + 1);
	if (!line)
		return (NULL);
	while (content[index])
	{
		if (content[index] == '\n')
		{
			line[index] = content[index];
			index++;
			break ;
		}
		line[index] = content[index];
		index++;
	}
	line[index] = '\0';
	return (line);
}

char	*ft_save(char *content)
{
	int		index;
	int		sub_index;
	char	*new_content;

	index = 0;
	while (content[index] && content[index] != '\n')
		index++;
	sub_index = 0;
	new_content = (char *)malloc(ft_strlen(content + index + 1) + 1);
	if (!new_content)
		return (NULL);
	while (content[index])
	{
		new_content[sub_index] = content[index + 1];
		index++;
		sub_index++;
	}
	new_content[sub_index] = '\0';
	free(content);
	return (new_content);
}

char	*get_next_line(int fd)
{
	static t_list		*head;
	t_list				*node;
	char				*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	node = ft_node(&head, fd);
	if (!node)
		return (NULL);
	node->content = ft_content(node->content, fd);
	if (!(node->content) || !(node->content[0]))
	{
		ft_lstdel(fd, &head, &node);
		return (NULL);
	}
	line = ft_line(node->content);
	node->content = ft_save(node->content);
	if (!(node->content) || !(node->content[0]))
		ft_lstdel(fd, &head, &node);
	return (line);
}
