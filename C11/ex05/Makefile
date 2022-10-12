# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachhoub <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/09 17:35:11 by aachhoub          #+#    #+#              #
#    Updated: 2022/08/09 22:14:12 by aachhoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = res/do_op.c res/ft_sum.c res/ft_sub.c res/ft_multiply.c res/ft_div.c res/ft_mod.c res/ft_atoi.c res/ft_putnbr.c
OBJS = ${SRCS:.c=.o}
NAME	= do-op
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

all:
	${CC} ${CFLAGS}  ${SRCS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
