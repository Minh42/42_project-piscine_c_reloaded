/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 12:32:11 by minh              #+#    #+#             */
/*   Updated: 2017/11/15 19:31:19 by minh             ###   ########.fr       */
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


char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while(dest[i] != '\0')
        i++;

    j=0;
    while(src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return(dest);
}

int     main(void)
{
    char str1[] = "Yellow";
    char str2[] = "Fresherrr";

    ft_putstr(ft_strcat(str1, str2));
    return(0);
}