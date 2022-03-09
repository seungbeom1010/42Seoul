/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:42:41 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/16 20:57:00 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_condition(int *arr, int index)
{
	int		comp_index;

	comp_index = 0;
	while (comp_index < index)
	{
		if (arr[comp_index] == arr[index])
			return (0);
		if ((arr[index] - arr[comp_index]) == (index - comp_index))
			return (0);
		if ((arr[index] - arr[comp_index]) == comp_index - index)
			return (0);
		comp_index++;
	}
	return (1);
}

void	print_arr(int *arr)
{
	int		arr_index;
	char	tmp;

	arr_index = 0;
	while (arr_index < 10)
	{
		tmp = arr[arr_index] + '0';
		write(1, &tmp, 1);
		arr_index++;
	}
	write(1, "\n", 1);
}

void	create_arr(int *arr, int index, int *count)
{
	int		value;

	if (index == 10)
	{
		print_arr(arr);
		(*count)++;
	}
	else if (index < 11)
	{
		value = 0;
		while (value <= 9)
		{
			arr[index] = value;
			if (check_condition(arr, index))
				create_arr(arr, index + 1, count);
			value++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		arr[10];
	int		count;
	int		index;

	index = 0;
	count = 0;
	create_arr(arr, index, &count);
	return (count);
}
