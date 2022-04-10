# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 15:41:15 by seungbeom         #+#    #+#              #
#    Updated: 2022/04/08 22:40:47 by seungbeom        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# HEADERS = ./includes

SRCS = ft_isalpha.c

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all : ${NAME}

%.o : %.c
	gcc -c ${FLAGS} $< -o $@ -I libft.h

$(NAME) : $(OBJS)
	ar rc $(NAME) *.o

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re