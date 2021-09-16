# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/28 15:55:52 by mslyther          #+#    #+#              #
#    Updated: 2021/03/01 21:49:20 by mslyther         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
HEADER	= -I ./includes/
SRCS	= ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
GCC		= gcc
FLAGS	= -Wall -Wextra -Werror
LIB		= ar rc ${NAME} ${OBJS}

.c.o:
		${GCC} ${FLAGS} ${HEADER} -c $< -o ${<:.c=.o}

.PHONY: all clean fclean re

all:	${OBJS}
		${LIB}
clean:	
		rm -rf ${OBJS}

fclean:		clean
		rm -rf ${NAME}

re:		fclean all

${NAME}:	all