# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabdelad <aabdelad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 15:54:41 by aabdelad          #+#    #+#              #
#    Updated: 2021/12/13 14:10:43 by aabdelad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INC = ft_printf.h
SRCS = ft_printf.c\
       ft_puthexa_up.c\
       ft_puthexa_low.c\
       ft_putchar.c\
       ft_putnbr.c\
       ft_putnbr_u.c\
       ft_putstr.c

CFLAGS = -Wall -Werror -Wextra

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	ar -rc $(NAME) $(OBJ)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
