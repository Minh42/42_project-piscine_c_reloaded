/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 20:55:33 by minh              #+#    #+#             */
/*   Updated: 2017/11/12 21:33:41 by minh             ###   ########.fr       */
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

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    
    i = 0;
    while(src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while(dest[i] != '\0')
    {
        dest[i] = '\0';
        i++;
    }
    return(dest);
}

int     main(void)
{
    char str1[] = "Hellooooo";
    char str2[] = "Yeppow";

    ft_putstr(ft_strncpy(str1, str2, 2));
    return(0);
}