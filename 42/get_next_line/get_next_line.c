/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:49:13 by seunjang          #+#    #+#             */
/*   Updated: 2022/05/05 23:42:00 by seungbeom        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	check_newline(t_list *result)
{
	as
}

char	*get_next_line(int fd)
{
	static t_list	*result;
	char			buff[BUFF_SIZE + 1];
	int				tmp_buffsize;

	// 연결리스트 내 해당 fd에 해당하는 요소가 존재하는지 확인, 없을 경우 추가
	tmp_buffsize = read(fd, buff, BUFF_SIZE);
	while (tmp_buffsize > 0)
	{
		buff[tmp_buffsize] = '\0';
		result->content = ft_strjoin(result->content, ft_strdup(buff));
		if (check_newline(result))
		{
			// 개행문자 전까지 result->content 최신화
			// 개행문자 전까지 자른 출력
			return (0);
		}
	}
	if (!result)
		return (0);
	return (0);
}
