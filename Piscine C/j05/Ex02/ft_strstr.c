/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 21:34:21 by minh              #+#    #+#             */
/*   Updated: 2017/11/12 21:47:43 by minh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_putchar(char c)
{
    write (1, &c, 1);
    return(0);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n < 10)
		ft_putchar(n + 48);
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
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

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (to_find[i] != '\0')
    {
        if (to_find[i] == str[j])
           return(str);
        else
            j++;
    }
    i++;
    return(0);
}

int     main(void)
{
    char str1[] = "Hello";
    char str2[] = "Youpiiiii";

    ft_putstr(ft_strstr(str1, str2));
    return(0); 
}