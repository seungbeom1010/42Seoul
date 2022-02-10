/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:36:43 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/10 11:38:02 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	find_size(char *c)
{
	unsigned int		count;

	count = 0;
	while (c[count])
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		size_d;
	unsigned int		size_s;
	unsigned int		index;
	unsigned int		start;

	size_d = find_size(dest);
	size_s = find_size(src);
	index = 0;
	start = find_size(dest);
	while (src[index] && size > start + 1)
	{
		dest[start] = src[index];
		index++;
		start++;
	}
	dest[start] = '\0';
	if (find_size(dest) <= size)
		return (size_d + size_s);
	else
		return (size_s + size);
}
