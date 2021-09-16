# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/03 21:34:56 by mslyther          #+#    #+#              #
#    Updated: 2021/03/03 21:36:45 by mslyther         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op
NAME_LIB = libft.a
HEADER	= -I ft.h
SRCS	= ft_atoi.c ft_putnbr.c operation.c print_error.c
OBJS	= ${SRCS:.c=.o}
GCC		= gcc
FLAGS	= -Wall -Wextra -Werror
LIB		= ar rc ${NAME_LIB} ${OBJS}

.c.o:
		${GCC} ${FLAGS} ${HEADER} -c $< -o ${<:.c=.o}

.PHONY: all clean fclean

all:	${OBJS}
		${LIB} 
		${GCC} ${FLAGS} main.c -L. -lft -o ${NAME}
clean:	
		rm -rf ${OBJS}
		rm -rf ${NAME_LIB}

fclean:		clean
		rm -rf ${NAME}