/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:24:35 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/10 11:12:48 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_nbr(char *c)
{
	int		index;

	index = 0;
	while (c[index])
		index++;
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	int		start;
	int		index;

	index = 0;
	start = find_nbr(dest);
	while (src[index])
	{
		dest[start] = src[index];
		start++;
		index++;
	}
	dest[start] = '\0';
	return (dest);
}
