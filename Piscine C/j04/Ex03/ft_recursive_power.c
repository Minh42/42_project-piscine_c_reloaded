/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 14:55:10 by minh              #+#    #+#             */
/*   Updated: 2017/11/11 15:28:54 by minh             ###   ########.fr       */
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

int     ft_recursive_power(int nb, int power)
{   
    int resultat;

    resultat = 1;
    if ((nb == 0 && power != 0) || power < 0)
        return(0);      
    else if (power == 0)
        return(1);
    else
    resultat = nb * ft_recursive_power(nb, power - 1);
    return(resultat);
}

int     main(void)
{
    ft_putnbr(ft_recursive_power(2,4));
    return(0);
}