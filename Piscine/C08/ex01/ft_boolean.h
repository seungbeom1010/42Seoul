/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:27:30 by seunjang          #+#    #+#             */
/*   Updated: 2022/02/20 16:44:51 by seunjang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define EVEN(nbr)	(nbr % 2 == 0)
# define TRUE		1
# define FALSE		0
# define EVEN_MSG	"I have an even number of arguments.\n"	
# define ODD_MSG	"I have an odd number of arguments.\n"
# define SUCCESS	0

typedef int		t_bool;

#endif
