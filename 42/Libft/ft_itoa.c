/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 21:43:46 by seungbeom         #+#    #+#             */
/*   Updated: 2022/04/26 13:51:24 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit(unsigned int n)
{
	int		count;

	count = 1;
	while (n > 9)
	{
		n /= 10;
		count += 1;
	}
	return (count);
}

static char	*ft_buffill(char *result, unsigned int tmp_n, int sign)
{
	int		index;

	if (sign == 1)
	{
		index = ft_digit(tmp_n);
		while (--index >= 0)
		{
			result[index] = tmp_n % 10 + '0';
			tmp_n /= 10;
		}
	}
	else
	{
		index = ft_digit(tmp_n) + 1;
		while (--index >= 1)
		{
			result[index] = tmp_n % 10 + '0';
			tmp_n /= 10;
		}
	}
	return (result);
}

static char	*ft_buffset(unsigned int tmp_n, int sign)
{
	char	*tmp_buff;

	if (sign == 1)
	{
		tmp_buff = (char *)malloc(sizeof(char) * (ft_digit(tmp_n) + 1));
		if (!tmp_buff)
			return (0);
		tmp_buff[ft_digit(tmp_n)] = '\0';
	}
	else
	{
		tmp_buff = (char *)malloc(sizeof(char) * (ft_digit(tmp_n) + 2));
		if (!tmp_buff)
			return (0);
		tmp_buff[0] = '-';
		tmp_buff[ft_digit(tmp_n) + 1] = '\0';
	}
	return (ft_buffill(tmp_buff, tmp_n, sign));
}

char	*ft_itoa(int n)
{
	char			*result;	
	unsigned int	tmp_n;
	int				sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	tmp_n = (unsigned int)n * (unsigned int)sign;
	result = ft_buffset(tmp_n, sign);
	return (result);
}
