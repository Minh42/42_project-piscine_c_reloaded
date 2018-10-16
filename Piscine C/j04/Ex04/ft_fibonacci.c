/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 15:30:23 by minh              #+#    #+#             */
/*   Updated: 2017/11/11 18:49:43 by minh             ###   ########.fr       */
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

int     ft_fibonacci(int index)
{
    if (index < 0)
        return(-1);
    if (index == 0)
        return(0);
    if (index == 1)
        return(1);
    else 
        return(ft_fibonacci(index-2) + ft_fibonacci(index-1));
    return(0);
}

int     main(void)
{
    ft_putnbr(ft_fibonacci((6)));
    return(0);
}