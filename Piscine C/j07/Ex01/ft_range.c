/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:38:33 by minh              #+#    #+#             */
/*   Updated: 2017/11/16 17:45:54 by minh             ###   ########.fr       */
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

int     *ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
        return (NULL);
        
	tab = (int*)malloc(sizeof(*tab) * (max - min));
    
    i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

int     main(void)
{
    int     i;
    int*    tab;
    
    tab = ft_range(5, 15);

    i = 0;
    while(i < 10)
    {
        ft_putnbr(tab[i]);
        ft_putchar('\n');
        i++;
    }
    return(0);
}