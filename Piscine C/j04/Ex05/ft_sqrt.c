/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:00:40 by mpham             #+#    #+#             */
/*   Updated: 2017/11/11 13:50:32 by minh             ###   ########.fr       */
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

int     ft_sqrt(int nb)
{
    int i;

    i = 1;

    while (i * i <= nb)
    {
        if (i * i == nb)
            return(i);
        else
            i++;
    }
    return(0);
}


int     main(void)
{

    ft_putnbr(ft_sqrt(5));
    return(0);

}