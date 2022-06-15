/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 22:31:54 by seungbeom         #+#    #+#             */
/*   Updated: 2022/06/15 00:51:14 by seungbeom        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

t_list  *get_node(t_list **head, int fd)
{
    t_list  *node;

    if (*head == 0)
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
        node = node->next;
    }
    node = ft_lstnew(fd);
    return (node);
}

char    *get_next_line(int fd)
{
    static t_list   *head;
    t_list          *node;
    char            *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
    node = get_node(&head, fd);
    if (!node)
        return (0);
    
}