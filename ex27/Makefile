# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpham <mpham@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/20 10:15:55 by minh              #+#    #+#              #
#    Updated: 2017/11/20 14:14:21 by mpham            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INCLUDES = ft_display_file.h

SRC = ft_display_file.c
OBJ = ft_display_file.o

$(NAME) : 
		$(CC) -I=$(INCLUDES) $(CFLAGS) -c $(SRC) -o $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
			
all : $(NAME)

clean : 
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)

re : fclean all