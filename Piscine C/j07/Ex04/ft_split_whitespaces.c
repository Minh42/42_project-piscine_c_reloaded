/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 10:57:04 by minh              #+#    #+#             */
/*   Updated: 2017/11/17 14:43:45 by minh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int     ft_putchar(char c)
{
    write (1, &c, 1);
    return(0);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
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

// find numbers of words
int     ft_word_count(char *str)
{
    int i;
    int count;
    int on;

    i = 0;
    count = 0;
    on = 0;

    if (!str)
        return(0);

    while (str[i] != '\0')
	{
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\v' && str[i] != '\f' && str[i] != '\r' && str[i] != '\0')
        {
            i++;
            on = 1;
        }
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == '\0')
        {
            count += (on == 1) ? 1 : 0; // équivalent à if on == 1 count = count + 1 else count = count + 0
            on = 0; // permet de compter un mot que lorsqu'il est suivi d'un espace
            i++;
        }
    }
    return(count);
}

//find length of words
int     ft_word_size(char *str, int i)
{
    int size;

    size = 0;

    while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\v' && str[i] != '\f' && str[i] != '\r' && str[i] != '\0')
    {
        size++;
        i++;
    }    
    return(size);
}

char    **ft_split_whitespaces(char *str)
{
    int     i;
    int     j;
    int     k;
    char    **resultat;
    
    i = 0;
    j = 0;
    if ((resultat = malloc(sizeof(char*) * (ft_word_count(str) + 1))) == NULL)
        return(NULL);
        
    while(str[i] != '\0')
    {
        while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\v' && str[i] != '\f' && str[i] != '\r' && str[i] != '\0')
            i++;
        if (str[i] != '\0')
        {
            k = 0;
            if((resultat[j] = malloc(sizeof(char) * ((ft_word_size(str, i)) + 1))) == NULL)
                return(NULL);
            while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\v' && str[i] != '\f' && str[i] != '\r' && str[i] != '\0')
                resultat[j][k++] = str[i++];
            resultat[j++][k] = '\0';
        }
    }
    resultat[j] = NULL;
    return(resultat);
}

int     main(void)
{
    char str[] = "Bonjour  tulu    comment ça va  dqqd";

    //ft_putnbr(ft_word_count(str));
    //ft_putnbr(ft_word_size(str, 0));
    ft_split_whitespaces(str);
    return(0);
}