/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:40:18 by minh              #+#    #+#             */
/*   Updated: 2017/11/16 18:19:55 by minh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

int     ft_ultimate_range(int **range,int min, int max)
{
    int     i;
    int*    tab;

	if (min >= max)
        *range = NULL;
        
	tab = (int*)malloc(sizeof(*tab) * (max - min));
    
    i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
    }
    *range = tab;
	return (i);   
}

int     main(void)
{
    int i;
    int resultat;
    int *tab;
    
    resultat = ft_ultimate_range(&tab, 5, 10);

    i = 0;
    while (i < resultat)
    {
        ft_putnbr(tab[i]);
        ft_putchar('\n');
        i++;
    }
    return(0);
}