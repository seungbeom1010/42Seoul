/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:49:47 by seunjang          #+#    #+#             */
/*   Updated: 2022/05/26 21:31:58 by seungbeom        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct s_list
{
	int				fd;
	char			*content;
	struct s_list	*next;
}	t_list;

char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strlen(const char *str);
int		ft_strchr(char *content, int c);
void	ft_lstdel(t_list **head, t_list **node);
t_list	*ft_lstnew(int fd);
t_list	*get_node(t_list **head, int fd);
char	*get_newline(char *content);
char	*get_newsave(char *content);
char	*get_content(char **content, int fd);
char	*get_next_line(int fd);
char	*ft_strdup(const char *s1);

#endif