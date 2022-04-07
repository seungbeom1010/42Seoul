/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyelee <kyelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:08:19 by kyelee            #+#    #+#             */
/*   Updated: 2022/02/13 19:30:25 by sohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_argv(char *str, int *num)
{
	int	index;
	int	word;

	word = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if (index % 2 == 0)
		{
			if (str[index] < '1' || str[index] > '4')
				return (1);
			else
			{
				*num++ = str[index] - '0';
				word++;
			}
		}
		else if (str[index] != ' ')
			return (1);
		index++;
	}
	if (word == 16 && index == 31)
		return (0);
	else
		return (1);
}

int	check_error(int argc, char *argv[], int *num)
{
	char	*str;

	if (argc != 2)
		return (1);
	str = argv[1];
	if (check_argv(str, num))
		return (1);
	return (0);
}
