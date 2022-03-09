/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:56:54 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/10 11:17:38 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	find_index(char *c)
{
	unsigned int		index;

	index = 0;
	while (c[index])
		index++;
	return (index);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		index;
	unsigned int		start;

	index = 0;
	start = find_index(dest);
	while (index < nb && src[index])
	{
		dest[start] = src[index];
		start++;
		index++;
	}
	dest[start] = '\0';
	return (dest);
}
