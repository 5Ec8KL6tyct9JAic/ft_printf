# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mako0 <mako0@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/22 10:45:45 by mako0             #+#    #+#              #
#    Updated: 2023/03/22 10:46:43 by mako0            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_printhex.c ft_printnbr.c \
ft_itoa.c ft_putstr.c ft_putchar.c ft_putperc.c ft_putnbr.c \
ft_printptr.c

OBJS = ${SRCS:.c=.o}

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -I.

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

all: $(NAME)

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean: 
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re