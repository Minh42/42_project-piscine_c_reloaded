/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 10:43:46 by minh              #+#    #+#             */
/*   Updated: 2017/11/15 11:37:27 by minh             ###   ########.fr       */
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

/*
int     ft_str_is_alpha(char *str)
{
    int i;

    i = 0;

    if (str[0] == '\0')
        return(1);
        
    while (str[i] != '\0')
    {
        if (!(str[i] >= 'a' && str[i] <= 'z') || !(str[i] >= 'A' && str[i] <= 'Z'))
            return(0);
        else
            return(1);
    }
    i++;
    return(1);
}
*/

int ft_str_is_alpha(char *str)
{
	while (str[0] != '\0')
	{
		if (!((str[0] >= 'A' && str[0] <= 'Z') ||
			(str[0] >= 'a' && str[0] <= 'z')))
			return (0);
		str++;
	}
	return (1);
}

int     main(void)
{
    char str[] = "";

    ft_putnbr(ft_str_is_alpha(str));
    return(0);
}