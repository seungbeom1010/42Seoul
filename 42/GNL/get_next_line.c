/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:51:34 by seunjang          #+#    #+#             */
/*   Updated: 2022/07/20 22:33:20 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	*get_node(t_list **head, int fd)
{
	t_list		*node;

	if (*head == NULL)
	{
		*head = ft_lstnew(fd);
		return (*head);
	}
	node = *head;
	while (node->fd != fd)
	{
		if (node->next == NULL)
		{
			node->next = ft_lstnew(fd);
			return (node->next);
		}
		node = node->next;
	}
	return (node);
}

char	*get_content(char **content, int fd)
{
	char	buf[BUFFER_SIZE + 1];
	char	*temp;
	int		buf_size;

	while (1)
	{
		if (ft_strrchr(*content, '\n'))
			break ;
		buf_size = read(fd, buf, BUFFER_SIZE);
		if (buf_size == 0)
			break ;
		if (buf_size == -1)
		{
			free(*content);
			return (NULL);
		}
		buf[buf_size] = '\0';
		temp = ft_strjoin(*content, buf);
		if (!temp)
			return (NULL);
		free(*content);
		*content = temp;
	}
	return (*content);
}

char	*get_line(char *content)
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

char	*get_save(char *content)
{
	int		index;
	int		sub_index;
	char	*new_content;

	index = 0;
	while (content[index] && content[index] != '\n')
		index++;
	if (!(content[index++]))
	{
		free(content);
		return (NULL);
	}
	sub_index = 0;
	new_content = (char *)malloc(ft_strlen(content + index) + 1);
	if (!new_content)
		return (NULL);
	while (content[index])
	{
		new_content[sub_index] = content[index];
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
	node = get_node(&head, fd);
	if (!node)
		return (NULL);
	node->content = get_content(&(node->content), fd);
	if (!(node->content) || !(node->content[0]))
	{
		ft_lstdel(fd, &head, node);
		return (NULL);
	}
	line = get_line(node->content);
	node->content = get_save(node->content);
	if (!(node->content) || !(node->content[0]))
		ft_lstdel(fd, &head, node);
	return (line);
}
