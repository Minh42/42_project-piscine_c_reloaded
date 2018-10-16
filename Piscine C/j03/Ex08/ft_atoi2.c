/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:27:13 by minh              #+#    #+#             */
/*   Updated: 2017/11/10 10:33:11 by minh             ###   ########.fr       */
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

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    ft_putnbr(i);
    return(0);
}

int		ft_atoi(char *str)
{
  int i = 0;
  int resultat = 0;
  int negan = 0;
  
  // chaine de caractères vide, tab horizontale, saut de ligne, retour chariot, tab verticale, saut de page
  while((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') ||
        (str[i] == '\r') || (str[i] == '\v') || (str[i] == '\f'))
    i++;
  
  // identifier signe -
  if (str[i] == '-')
  {
    negan = 1;
    i++;
  }
  
  // identifier signe +
  if (str[i] == '+')
  {
    i++;
  }
  
  // s'assurer que le traitement est fait sur des chiffres
  while (str[i] >= '0' && str[i] <= '9')
  {
    resultat = (resultat * 10) + (str[i] - '0');
    i++;
  }

  if (negan == 1)
    return (-resultat);
  else
    return (resultat);
}

int     main(void)
{
    char str[] = "+101";
    char str2[] = "-34";

    ft_putnbr(ft_atoi(str));
    ft_putchar('\n');
    ft_putnbr(ft_atoi(str2));
    ft_putchar('\n');

    // batterie de tests
    ft_putnbr(ft_atoi("-3"));
    ft_putchar('\n');
    ft_putnbr(ft_atoi("+3"));
    ft_putchar('\n');
    ft_putnbr(ft_atoi(" 3plop"));
    ft_putchar('\n');
    ft_putnbr(ft_atoi("pet321."));
    ft_putchar('\n');
    ft_putnbr(ft_atoi("\t \n"));
    ft_putchar('\n');
    ft_putnbr(ft_atoi(""));
    ft_putchar('\n');
    ft_putnbr(ft_atoi("0001"));
    return(0);
}