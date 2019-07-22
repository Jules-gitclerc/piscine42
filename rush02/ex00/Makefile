# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nveron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 10:45:41 by nveron            #+#    #+#              #
#    Updated: 2019/07/21 14:04:20 by nveron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./srcs/option.c ./srcs/rush.c ./srcs/ft_2.c ./srcs/convert.c ./srcs/centaine.c

HEADER	= includes

OBJS	= ${SRCS:.c=.o}

RM		= rm -f

NAME	= rush-02

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -I${HEADER} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		gcc ${OBJS} -o ${NAME}

all: 	${NAME}


clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean	all

.PHONY:	all clean fclean re
