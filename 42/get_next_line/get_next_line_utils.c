/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:49:38 by seunjang          #+#    #+#             */
/*   Updated: 2022/05/04 16:30:18 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	index;

	p = (char *)malloc(ft_strlen(s1) + 1);
	if (!p)
		return (0);
	index = 0;
	while (s1[index])
	{
		p[index] = s1[index];
		index++;
	}
	p[index] = '\0';
	return (p);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	index;
	size_t	sub_index;

	if (!s1 || !s2)
		return (0);
	p = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!p)
		return (0);
	index = 0;
	sub_index = 0;
	while (s1[sub_index])
		p[index++] = s1[sub_index++];
	sub_index = 0;
	while (s2[sub_index])
		p[index++] = s2[sub_index++];
	p[index] = '\0';
	return (p);
}