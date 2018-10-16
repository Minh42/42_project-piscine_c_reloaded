/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 10:20:30 by minh              #+#    #+#             */
/*   Updated: 2017/11/20 11:06:25 by minh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft.h"

#define BUFFER_SIZE 10000

int     ft_putchar(char c)
{
    write (1, &c, 1);
    return(0);
}

void     ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int		main(int argc, char *argv[])
{
	int		fd;
	int		buf;
	char	buffer[BUFFER_SIZE + 1];

	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			write(1, "No file.\n", 9);
		else
		{
			while ((buf = read(fd, buffer, BUFFER_SIZE)))
			{
				buffer[buf] = '\0';
				ft_putstr(buffer);
			}
		}
	}
	return (0);
}