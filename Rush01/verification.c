/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verification.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:28:32 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/12 20:33:18 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verif_argv(char *arr, int *data)
{
	int		count;
	int		index;

	count = 0;
	index = 0;
	while (count < 16 && arr[index] != '\0')
	{
		if (index % 2 == 0)
		{
			if (arr[index] < '1' || arr[index] > '4')
				return (1);
			else
			{
				*data++ = arr[index] - '0';
				count++;
			}
		}
		else if (arr[index] != 32 && (arr[index] < 9 || arr[index] > 13))
			return (1);
		index++;
	}
	if (count == 16 && index == 31)
		return (0);
	else
		return (1);
}

int	verification(int argc, char *argv[], int *data)
{
	if (argc != 2)
		return (1);
	else if (verif_argv(argv[1], data))
		return (1);
	else
		return (0);
}
