/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:37:27 by mpham             #+#    #+#             */
/*   Updated: 2017/11/11 13:50:04 by minh             ###   ########.fr       */
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

int     ft_recursive_factorial(int nb)
{

    unsigned long resultat;
    int i;

    i = 1;
    resultat = 0;

    if (nb < 0)
        return(0);

    if (nb == 0)
        return(1);
    
    if (nb == 1)
        return(1);
    else
    {
        resultat = nb * ft_recursive_factorial(nb - 1);
    }
    return(resultat);
}

int     main(void)
{
    ft_putnbr(ft_recursive_factorial(-42));
    return(0);
}