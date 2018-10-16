/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 09:16:01 by minh              #+#    #+#             */
/*   Updated: 2017/11/10 11:10:19 by minh             ###   ########.fr       */
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


void    ft_sort_integer_table(int *tab, int size)
{

int i;
int j;
int temp;

i = 0;
j = 1;
temp = 0;

while (tab[i] < tab[size])
{
    if (tab[i] > tab[j])
    {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
        i = 0;
        j = 1;
    }
    else 
    {
        i++;
        j++;
    }
}

i = 0;
while (tab[i] < tab[size])
{
    ft_putnbr(tab[i]);
    ft_putchar('\n');
    i++;
}

}

int     main(void)
{
    int tableau[5] = {12, 0, -42, -8, -75};

    ft_sort_integer_table(tableau, 5);
    return(0);
}