# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julclerc <julclerc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/20 17:11:52 by julclerc          #+#    #+#              #
#    Updated: 2019/07/22 18:32:43 by julclerc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DOSS = ./srcs/

SRCS = ${DOSS}ft_putchar.c ${DOSS}ft_swap.c ${DOSS}ft_putstr.c ${DOSS}ft_strlen.c ${DOSS}ft_strcmp.c

OBJS = ${SRCS:.c=.o }

CFLAGS = -Wall -Wextra -Werror

CC = gcc

RM = rm -f

NAME = libft.a

PATH = ./includes

HEADER = ${PATH}

.c.o :
	${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}

re : fclean all

.PHONY : all clean fclean re