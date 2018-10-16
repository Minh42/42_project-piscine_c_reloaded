/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:48:55 by minh              #+#    #+#             */
/*   Updated: 2017/11/09 09:26:01 by minh             ###   ########.fr       */
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

char    *ft_strrev(char *str)
{

    int i;
    int j;
    char temp;

    i = 0;
    j = 0;
    while (str[j] != '\0')
    {
        j++;
    }
    j--;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j --;
        i ++;
    }

    ft_putstr(str);
    return(0);
}

int     main(void)
{
    char str[] = "tranquilite";

    ft_strrev(str);
    return(0);
}