# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunjang <seunjang@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 13:44:10 by seunjang          #+#    #+#              #
#    Updated: 2022/02/21 13:44:26 by seunjang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PATH_SRC = ./srcs/

HEADERS = ./includes

SRCS = $(PATH_SRC)ft_putchar.c  $(PATH_SRC)ft_swap.c $(PATH_SRC)ft_putstr.c \
    $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_strcmp.c

OBJS =  ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

.c.o :
	gcc -c $(FLAGS) -I $(HEADERS) $< -o $(<:.c=.o)

$(NAME) : ${OBJS}
	ar rc $(NAME) $(OBJS)

clean:
	rm -f ${OBJS}

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re

