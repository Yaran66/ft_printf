# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/12/03 13:46:37 by wjasmine          #+#    #+#             #
#   Updated: 202#   Updated: 2021/12/08 17:26:11 by wjasmine         ###   ########.fr       #                                                              #
# ************************************************************************** #

SRCS	=	ft_printf.c ft_putchar.c ft_display.c \
			ft_display_c.c ft_strlen.c ft_putchar.c \
			ft_display_str.c ft_putstr.c ft_display_dig.c \
			ft_putnbr.c ft_numlen.c ft_display_ptr.c \
			ft_get_put_hex_x.c ft_display_u.c \
			ft_get_put_hex_XX.c \

OBJS	= ${SRCS:.c=.o}


NAME = libftprintf.a

CC	= gcc
RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

all:		${NAME}

$(NAME):	${OBJS}
			ar rcs ${NAME} $?

%.o	:	%.c ft_printf.h
		${CC}	${CFLAGS}	 -c $< -o ${<:.c=.o}


clean:
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
