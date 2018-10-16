/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 10:16:39 by minh              #+#    #+#             */
/*   Updated: 2017/11/16 10:39:49 by minh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_putchar(char c)
{
    write (1, &c, 1);
    return(0);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int     main(int argc, char **argv)
{
    int i;

    i = 0;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        i++;
    }
    return(0);
}


/*
int     main(int argc, char **argv)
{
    if (argc == 1)
        ft_putstr(argv[0]);
    return(0);
}
*/
