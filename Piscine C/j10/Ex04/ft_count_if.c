/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:23:34 by minh              #+#    #+#             */
/*   Updated: 2017/11/18 15:59:08 by minh             ###   ########.fr       */
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

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int     ft_count_if(char **tab, int(*f)(char*))
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (tab[i])
    {
        if (f(tab[i]) == 1)
            count++;
        i++;
    }
    return(count);
}

int     main(void)
{
    char    *tab[4]={"","z","poire"};
    int     (*pointeurSurFonction)(char *);

    pointeurSurFonction = &(ft_strlen);
    ft_putnbr(ft_count_if(tab, &ft_strlen));
    return(0);
}