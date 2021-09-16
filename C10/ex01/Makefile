# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/02 20:59:23 by mslyther          #+#    #+#              #
#    Updated: 2021/03/02 21:00:47 by mslyther         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_cat
NAME_LIB = libft.a
HEADER	= -I ft.h
SRCS	= display_files.c print_error.c standart_output.c
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