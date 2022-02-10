/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:04:54 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/10 18:27:12 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		s_index;
	int		f_index;
	int		temp;

	s_index = 0;
	if (to_find[0] == '\0')
		return (str);
	else
	{
		while (str[s_index])
		{	
			temp = 0;
			f_index = 0;
			while (str[s_index + temp] == to_find[f_index] && to_find[f_index])
			{
				temp++;
				f_index++;
				if (to_find[f_index] == '\0')
					return (str + s_index);
			}
			s_index++;
		}
	}
	return (0);
}
