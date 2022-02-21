# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 02:10:13 by seunjang          #+#    #+#              #
#    Updated: 2022/02/22 03:21:57 by seunjang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

PATH_SRC = ./srcs/

HEADERS = ./includes/

SRCS = $(PATH_SRC)main.c $(PATH_SRC)do_op.c $(PATH_SRC)ft_atoi.c \
	   $(PATH_SRC)ft_putnbr.c $(PATCH_SRC)ft_putstr.c $(PATH_SRC)calc.c

OBJS = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

.c.o :
	gcc -c $(FLAGS) 

$(NAME) : ${OBJS}
	ar rc $(NAME) $(OBJS)

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re

