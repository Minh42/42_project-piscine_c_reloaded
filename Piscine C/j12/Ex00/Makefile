# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minh <minh@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/20 10:15:55 by minh              #+#    #+#              #
#    Updated: 2017/11/20 11:11:21 by minh             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
PATH_SRC = ./srcs/
PATH_HEADER = ./includes/ft.h
CFLAGS = -Wall -Wextra -Werror 
OPTION = -o $(NAME) -I $(PATH_HEADER)
SRC = $(PATH_SRC)main.c $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putstr.c 
OBJ = ft_putchar.o ft_putstr.o 
 
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