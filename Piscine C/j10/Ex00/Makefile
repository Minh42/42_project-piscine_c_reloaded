# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minh <minh@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/17 17:31:08 by minh              #+#    #+#              #
#    Updated: 2017/11/18 13:15:07 by minh             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 
PATH_SRC = ./srcs/
PATH_HEADER = ./includes/ft.h
CFLAGS = -Wall -Wextra -Werror 
OPTION = -c -I $(PATH_HEADER)
SRC = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putnbr.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strcmp.c $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_swap.c
OBJ = ft_putchar.o ft_putnbr.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
 
all: $(NAME)

$(NAME):
		gcc $(CFLAGS) $(OPTION) $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

.PHONY: clean fclean re

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all