/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 18:22:18 by minh              #+#    #+#             */
/*   Updated: 2017/11/17 10:55:02 by minh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int     ft_putchar(char c)
{
    write (1, &c, 1);
    return(0);
}

char    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
    return(0);
}

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while(dest[i] != '\0')
        i++;

    j=0;
    while(src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return(dest);
}

char    *ft_concat_params(int argc, char **argv)
{
    int     i;
    int     j;
    int     length;
    char    *src;

    i = 1;
    j = 0;
    length = 0;

    while (i < argc)
    {
        while(argv[i][j] != '\0')
        {
            j++;
            length++;
        }
       i++;
    }

    src = (char*)malloc(sizeof(*src) * (length + 1));

    if (src == NULL)
        return (0);
    
    i = 1;
    while (i < argc)
    {
        src = ft_strcat(src, argv[i]);
        src = ft_strcat(src, "\n");
        i++;
    }    
    src[length] = '\0';
    return(src);
}


int     main(int argc, char **argv)    
{
	if (argc == 1)
		return (0);

	ft_putstr(ft_concat_params(argc, argv));
	return 0;
}