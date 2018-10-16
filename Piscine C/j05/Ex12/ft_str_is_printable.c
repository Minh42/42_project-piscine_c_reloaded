/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 11:49:20 by minh              #+#    #+#             */
/*   Updated: 2017/11/15 11:59:33 by minh             ###   ########.fr       */
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

int     ft_str_is_printable(char *str)
{
    while (str[0] != '\0')
    {
       if (!(str[0] >= 32 && str[0] <= 126))
            return(0);
        str++;
    }
    return(1);
}

int     main(void)
{
   char str[] = "AAsZ";

   ft_putnbr(ft_str_is_printable(str));
   return(0);
}