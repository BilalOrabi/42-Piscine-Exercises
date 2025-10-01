# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bilal.orabi <bilal.orabi@learner.42.tech>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 13:56:24 by bilal.orabi       #+#    #+#              #
#    Updated: 2025/07/23 20:51:35 by bilal.orabi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRCS =  srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c  srcs/ft_strlen.c srcs/ft_strcmp.c main.c
CC = cc
OBJ = ${SRCS:.c=.o}

all: ${NAME}

.c.o :
	${CC} ${CFLAGS} -I includes -c $< -o $@

${NAME}: ${OBJ}
	ar src ${NAME} ${OBJ}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY : all clean fclean re
