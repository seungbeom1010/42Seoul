/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:49:13 by seunjang          #+#    #+#             */
/*   Updated: 2022/05/16 20:15:08 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	*get_node(t_list **head, int fd)
{
	t_list	*node;
	
	if (*head == NULL)
	{
		node = ft_lstnew(0, fd);
		*head = node;
		return (node);
	}
	node = *head;
	while (node)
	{
		if (node->fd == fd)
			return (node);
		node = node->next;
	}
	node = ft_lstnew(0, fd);
	return (node);
}

char	*get_newline(char *content)
{
	char	*line;
	int		index;

	index = 0;
	write(1, "0", 1);
	line = (char *)malloc(check_newline(content, '\0') + 1);
	if (!line)
		return (0);
	write(1, "0", 1);
	while (index < check_newline(content, '\0') && content[index])
	{
		line[index] = content[index];
		index++;
	}
	line[index] = '\0';
	return (line);
}

char	*get_newsave(char *content, int index)
{
	char	*new_content;
	int		new_index;

	new_index = 0;
	new_content = (char *)malloc(ft_strlen(content) - index);
	if (!new_content)
		return (0);
	while (ft_strlen(content) >= index + 1)
	{
		new_content[new_index] = content[index];
		new_index++;
		index++;
	}
	new_content[new_index] = '\0';
	return (new_content);
}

char	*get_content(t_list *node, int fd)
{
	char	*new_content;
	char	buff[BUFFER_SIZE + 1];
	int		tmp_bufsize;

	new_content = node->content;
	while ((tmp_bufsize = read(fd, buff, BUFFER_SIZE)) > 0 && check_newline(buff, '\n'))
	{	
		buff[tmp_bufsize] = '\0';
		new_content = ft_strjoin(new_content, ft_strdup(buff));
	}
	if (!new_content)
	{
		free(new_content);
		return (0);
	}
	return (new_content);
}

char	*get_next_line(int fd)
{
	static t_list	*head;
	t_list			*node;
	char			*line;
	
	node = get_node(&head, fd);
	if (!node)
		return (0);
	node->content = get_content(node, fd);
	write(1, "1", 1);
	write(1, "1", 1);
	line = get_newline(node->content);
	write(1, "1", 1);
	if (!line)
		return (0);
	write(1, "1", 1);
	node->content = get_newsave(node->content, check_newline(node->content, '\0'));
	return (line);
}
