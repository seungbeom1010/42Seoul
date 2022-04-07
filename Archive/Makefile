# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunjang <seunjang@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/11 12:45:47 by seunjang          #+#    #+#              #
#    Updated: 2022/03/11 17:02:50 by seunjang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c

OBJS = ${SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

.c.o : 
	gcc -c ${FLAGS} 

$(NAME) : obj
	ar rc $(NAME) *.o

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re