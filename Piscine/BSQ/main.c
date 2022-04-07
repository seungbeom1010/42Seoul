/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghshi <donghshi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 10:14:55 by donghshi          #+#    #+#             */
/*   Updated: 2022/02/23 11:48:20 by donghshi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "my_lib.h"

int	main(int argc, char *argv[])
{
	int		i;
	char	*buf;

	if (argc == 1)
	{
		buf = get_standard_input();
		if (check_all(buf) == 0)
		{
			print_error();
			return (0);
		}
		get_std_solution(buf);
	}
	else
	{
		i = 0;
		while (++i < argc)
		{
			get_solution(argv[i]);
			if (i != argc - 1)
				write(1, "\n", 1);
		}
	}
	return (0);
}
