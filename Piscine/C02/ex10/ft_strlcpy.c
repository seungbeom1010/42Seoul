/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:29:48 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/13 16:35:59 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	count_str(char *src)
{
	int		count;

	count = 0;
	while (src[count])
		count++;
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		index;

	index = 0;
	while (size != 0 && size > index + 1 && src[index])
	{
		dest[index] = src[index];
		index++;
	}
	if (size > 0)
		dest[index] = '\0';
	return (count_str(src));
}
