# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpham <mpham@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/17 17:31:08 by minh              #+#    #+#              #
#    Updated: 2017/11/20 15:30:04 by mpham            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c \
	srcs/ft_strcmp.c
INCLUDES = includes/ft.h

OBJ = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

$(NAME) : 
		$(CC) -I=$(INCLUDES) $(CFLAGS) $(SRC)
		ar rc $(NAME) $(OBJ)

all : $(NAME)

clean : 
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all