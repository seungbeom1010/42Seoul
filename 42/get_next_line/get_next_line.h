/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 23:26:21 by seungbeom         #+#    #+#             */
/*   Updated: 2022/06/21 18:45:23 by seungbeom        ###   ########.fr       */
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

int		ft_strlen(const char *s);
t_list	*ft_lstnew(int fd);
char	*ft_strrchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_lstdel(int fd, t_list **head);
t_list	*get_node(t_list **head, int fd);
char	*get_next_line(int fd);

#endif