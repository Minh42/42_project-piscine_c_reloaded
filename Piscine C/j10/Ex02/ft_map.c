/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 13:59:40 by minh              #+#    #+#             */
/*   Updated: 2017/11/18 14:24:52 by minh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

int     ft_triple(int nombre)
{
    int resultat = 0;

    resultat = 3 * nombre;  // On multiplie le nombre fourni par 3
    return resultat;       // On retourne la variable resultat qui vaut le triple de nombre
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

int     *ft_map(int *tab, int length, int(*f)(int))
{
    int     i;
    int     *resultat;

    i = 0;
    if ((resultat = (int*)malloc(sizeof(*resultat) * (length + 1))) == NULL)
        return(NULL);
        
    while (i < length)
    {
        resultat[i] = f(tab[i]);
        i++;
    }
    return(resultat);
}


int     main(void)
{
    int     tab[10] = {2,3,4,6,9,21,89,90,21,54};
    int     length = 5;
    int     *resultat;
    int     (*pointeurSurFonction)(int);
    void    (*pointeurSurFonction2)(int);

    pointeurSurFonction = &(ft_triple);
    pointeurSurFonction2 = &(ft_putnbr);

    resultat = ft_map(tab, length, &ft_triple);
    ft_foreach(resultat,length, &ft_putnbr);
    return(0);
}