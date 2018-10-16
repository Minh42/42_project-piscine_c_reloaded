/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 12:50:04 by minh              #+#    #+#             */
/*   Updated: 2017/11/18 14:25:37 by minh             ###   ########.fr       */
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

void    ft_foreach(int *tab ,int length, void(*f)(int))
{
    int i;

    i = 0;
    while (i < length)
    {
        f(tab[i]);
        i++;
    }
}


int     main(void)
{
    int tab[10] = {2,3,4,6,9,21,89,90,21,54};
    int length = 5;
    void (*pointeurSurFonction)(int);

    pointeurSurFonction = &(ft_putnbr);
    ft_foreach(tab, length, &ft_putnbr);
    return(0);
}