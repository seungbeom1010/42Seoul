/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 03:09:00 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/22 03:12:44 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void	do_op(char *nbr1, char *op, char *nbr2);
void	ft_putchar(char c);
int     nbr_digit(long long int nbr);
void    print_number(long long int nb);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		get_operator(char *op);
int     check_argv(char *nbr1, char *nbr2, int op_index);
int		add(int nbr1, int nbr2);
int		sub(int nbr1, int nbr2);
int		div(int nbr1, int nbr2);
int		mul(int nbr1, int nbr2);
int		mod(int nbr1, int nbr2);
int		ft_atoi(char *str);

#endif
