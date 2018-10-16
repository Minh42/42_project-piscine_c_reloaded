/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:00:30 by minh              #+#    #+#             */
/*   Updated: 2017/11/16 16:38:08 by minh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int     ft_putchar(char c)
{
    write (1, &c, 1);
    return(0);
}

char    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    return(0);
}

char    ft_strdup(char *src)
{
    int     i;
    int     length;
    char    *str;

    length = 0;
    while (src[length] != '\0')
        length++;

    str = (char*)malloc(sizeof(*str) * (length + 1));

    i = 0;
    while (i < length)
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return(ft_putstr(str));
}

int     main(void)
{
    char src[] = "Hellow";
    
    ft_strdup(src);
    return(0);
}