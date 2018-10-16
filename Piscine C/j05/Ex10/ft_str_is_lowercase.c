/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 11:24:18 by minh              #+#    #+#             */
/*   Updated: 2017/11/15 11:45:23 by minh             ###   ########.fr       */
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

int     ft_str_is_lowercase(char *str)
{
    while (str[0] != '\0')
    {
       if (!(str[0] >= 'a' && str[0] <= 'z'))
            return(0);
        str++;
    }
    return(1);
}

int     main(void)
{
   char str[] = "";

   ft_putnbr(ft_str_is_lowercase(str));
   return(0);
}