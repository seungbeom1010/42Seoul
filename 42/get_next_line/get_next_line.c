/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:49:13 by seunjang          #+#    #+#             */
/*   Updated: 2022/05/03 20:50:10 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*get_next_line(int fd)
{
	char	buff[BUFF_SIZE];
	int		temp_buff;

	
	while  ((temp_buff = read(fd, buff, sizeof(buff) - 1)) > 0)
	{
		buff[temp_buff] = '\0';
		return (buff);
	}
	return (NULL);
}
