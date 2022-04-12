# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seungbeom <seungbeom@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 15:41:15 by seungbeom         #+#    #+#              #
#    Updated: 2022/04/12 23:47:10 by seungbeom        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c 
		
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