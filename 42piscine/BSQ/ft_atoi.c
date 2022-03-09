/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghshi <donghshi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:27:44 by donghshi          #+#    #+#             */
/*   Updated: 2022/02/13 18:03:10 by donghshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_sign(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '+')
		{
			i++;
			continue ;
		}
		else if (str[i] == '-')
			count++;
		i++;
	}
	if (count % 2 == 0)
		return (1);
	else
		return (-1);
}

int	get_num(char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;

	i = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	sign = check_sign(&str[i]);
	while (str[i] && (str[i] == '-' || str[i] == '+'))
		i++;
	return ((sign * get_num(&str[i])));
}
