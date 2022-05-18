/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:49:47 by seunjang          #+#    #+#             */
/*   Updated: 2022/05/17 18:34:46 by seungbeom        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

// # define BUFFER_SIZE 1
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_list
{
	int				fd;
	char			*content;
	struct s_list	*next;
}	t_list;

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(char *s1);
int		ft_strlen(const char *str);
int		check_newline(char *s, int c);
t_list	*ft_lstnew(void *content, int fd);
t_list	*get_node(t_list **head, int fd);
char	*get_newline(char *content);
char	*get_newsave(t_list *node);
char	*get_content(t_list *node, int fd);
char	*get_next_line(int fd);

#endif