# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mslyther <mslyther@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/09 19:40:16 by mslyther          #+#    #+#              #
#    Updated: 2021/03/10 20:25:38 by mslyther         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bsq
HEADER = -I ./includes/
SRCS_LIST = check_map.c error_msg.c find_sqr.c list_struct.c my_realloc.c start_finding.c std_input.c
SRCS_PATH = ./sources/
SRCS = $(addprefix $(SRCS_PATH), $(SRCS_LIST))
OBJS	= ${SRCS:.c=.o}
GCC		= gcc
FLAGS	= -Wall -Wextra -Werror
RM = rm -rf

.PHONY: all clean fclean re

.c.o:
		${GCC} ${FLAGS} ${HEADER} -c $< -o ${<:.c=.o}

all:	${OBJS} 
		${GCC} ${FLAGS} ${OBJS} main.c -o ${NAME}

clean:	
		rm -rf ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
		