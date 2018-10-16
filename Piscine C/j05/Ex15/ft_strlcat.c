/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 14:14:27 by minh              #+#    #+#             */
/*   Updated: 2017/11/15 20:52:53 by minh             ###   ########.fr       */
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

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned	int i;
	unsigned	int j;
	unsigned	int k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	k = 0;
	while (src[k] != '\0')
		k++;
	return (k + size);
}

int             main(void)
{
    char str1[] = "Hello";
    char str2[] = "Fresh";

    ft_putnbr(ft_strlcat(str1, str2, 2));
    return(0);
}