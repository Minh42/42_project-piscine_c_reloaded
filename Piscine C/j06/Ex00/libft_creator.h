gcc -Wall -Wextra -Werror -c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar rc libft.a ft_putchar.o ft_putnbr.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
rm *.o