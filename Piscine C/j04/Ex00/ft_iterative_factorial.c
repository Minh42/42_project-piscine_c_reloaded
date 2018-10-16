/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:49:59 by mpham             #+#    #+#             */
/*   Updated: 2017/11/11 13:49:45 by minh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int     ft_iterative_factorial(int nb)
{
    int i;
    unsigned long resultat;

    i = 1;
    resultat = 1;

    if (nb == 0)
        return 1;
    
    while (i <= nb)
    {   
        resultat = resultat * i;
        i++;
    }
    return(resultat);
}

int     main(void)
{
    ft_putnbr(ft_iterative_factorial(9));
    return(0);
}