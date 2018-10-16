/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 13:47:32 by minh              #+#    #+#             */
/*   Updated: 2017/11/11 14:51:31 by minh             ###   ########.fr       */
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

int     ft_iterative_power(int nb, int power)
{
    int i;
    int resultat;

    i = 1;
    resultat = 1;

    if ((nb == 0 && power != 0) || power < 0)
        return(0);
    else if (power == 0)
        return(1);
    else   
        while (i <= power)
        {
        resultat = resultat * nb;
        i++;
        }
    return(resultat);
}

int     main(void)
{
    ft_putnbr(ft_iterative_power(1,6));
    return(0);
}