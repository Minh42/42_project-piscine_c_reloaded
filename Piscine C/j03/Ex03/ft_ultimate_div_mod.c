/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:07:49 by minh              #+#    #+#             */
/*   Updated: 2017/11/08 14:35:20 by minh             ###   ########.fr       */
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

void    ft_ultimate_div_mod(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *a / *b;
    *b = temp % *b;
}

int     main(void)
{
    int c;
    int d;
    int *ptr;
    int *ptr2;

    ptr = &c;
    ptr2 = &d;
    *ptr = 42;
    *ptr2 = 6;

    ft_putnbr(*ptr);
    ft_putnbr(*ptr2);
    ft_ultimate_div_mod(ptr, ptr2);
    ft_putnbr(*ptr);
    ft_putnbr(*ptr2);

    return(0);
}
