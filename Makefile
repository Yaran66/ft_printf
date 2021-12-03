# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/12/03 13:46:37 by wjasmine          #+#    #+#             #
#   Updated: 202#   Updated: 2021/12/03 13:51:19 by wjasmine         ###   ########.fr       #                                                              #
# ************************************************************************** #

SRCS	=	ft_printf.c ft_putchar.c \


OBJS	= ${SRCS:.c=.o}


NAME = libftprintf.a

CC	= gcc
RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:		${NAME}

$(NAME):	${OBJS}
			ar rcs ${NAME} $?

%.o	:	%.c libft.h
		${GCC}	${CFLAGS}	 -c $< -o ${<:.c=.o}


clean:
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
