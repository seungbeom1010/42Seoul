/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:49:13 by seunjang          #+#    #+#             */
/*   Updated: 2022/06/14 22:36:08 by seungbeom        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	*get_node(t_list **head, int fd)
{
	t_list	*node;

	if (*head == NULL)
	{
		node = ft_lstnew(NULL, fd);
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
	node = ft_lstnew(NULL, fd);
	// 마지막 노드->next에 새롭게 생성된 구조체가 들어갔는지 확인해야함
	// gnl test trial 1
	return (node);
}

char	*get_content(char **content, int fd)
{
	char	buff[BUFFER_SIZE + 1];
	char	*temp_cont;
	int		temp_size;

	temp_size = 1;
	while (temp_size > 0)
	{	
		temp_size = read(fd, buff, BUFFER_SIZE);
		if (temp_size == 0 && *content == 0)
			return (0);
		if (temp_size == -1)
		{
			free(*content);
			return (0);
		}
		buff[temp_size] = '\0';
		temp_cont = ft_strjoin(*content, buff);
		free(*content);
		*content = temp_cont;
		if (ft_strchr(*content, '\n'))
			break ;
	}
	return (*content);
}

char	*get_newsave(char *content)
{
	char	*new_content;
	int		index;
	int		new_index;

	index = 0;
	while (content[index] && content[index] != '\n')
		index++;
	if (content[index] == '\0')
		return (0);
	new_content = (char *)malloc(ft_strlen(content) - index);
	if (!new_content)
		return (NULL);
	new_index = 0 ;
	while (content[index + 1])
	{
		new_content[new_index] = content[index + 1];
		new_index++;
		index++;
	}
	new_content[new_index] = '\0';
	return (new_content);
}

char	*get_newline(char *content)
{
	char	*line;
	int		index;

	index = 0;
	if (!(content[index]))
		return (0);
	while (content[index] && content[index] != '\n')
		index++;
	line = (char *)malloc(index + 2);
	if (!line)
		return (0);
	index = 0;
	while (content[index] && content[index] != '\n')
	{
		line[index] = content[index];
		index++;
	}
	if (content[index] == '\n')
		line[index++] = '\n';
	line[index] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static t_list	*head;
	t_list			*node;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	node = get_node(&head, fd);
	if (!node)
		return (0);
	node->content = get_content(&(node->content), fd);
	if (!(node->content))
	{
		free(node->content);
		ft_lstdel(&head, &node);
		return (0);
	}
	line = get_newline(node->content);
	node->content = get_newsave(node->content);
	return (line);
}
