/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:49:13 by seunjang          #+#    #+#             */
/*   Updated: 2022/05/04 15:59:48 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char		*result;
	char			buff[BUFF_SIZE + 1];
	int				tmp_buffsize;
	
	while  ((tmp_buffsize = read(fd, buff, BUFF_SIZE) > 0)
	{
		buff[tmp_buffsize] = '\0';
		result = ft_strjoin(result, ft_strdup(buff));
		if (check_newline(result))
		{
			
			// result 최신화
			// 개행문자 전까지 반환
			return ();
		}
	}
	if (!result)
		return (0);
	return ();
	// 개행문자를 만나지 않은 상태에서 while문 종료, 즉 마지만 문장일 경우, 반환
	// 만약 result가 빈값일 경우 null 값 반환
}
