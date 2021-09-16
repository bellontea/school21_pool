# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/01 17:43:52 by mslyther          #+#    #+#              #
#    Updated: 2021/03/01 19:53:36 by mslyther         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file
NAME_LIB = libft.a
HEADER	= -I ft.h
SRCS	= print_error.c check_file.c ft_display_file.c
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