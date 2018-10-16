/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 10:59:46 by minh              #+#    #+#             */
/*   Updated: 2017/11/16 17:11:50 by minh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

int     main(int argc, char **argv)
{
    int     i;
    int     j;
    char    *temp;

    i = 0;
    while (i < argc-1)
    {
        if(ft_strcmp(argv[i], argv[i+1]) > 0)
        {
            temp = argv[i];
            argv[i] = argv[i+1];
            argv[i+1] = temp;
            i = 0;
        }
        else
            i++;
    }

    j = 1;
    while (j < argc)
    {
        ft_putstr(argv[j]);
        ft_putchar('\n');
        j++;
    }
    return(0);
}



/*
int     main(int argc, char **argv)
{
    int i;
    int j;
    char **temp = NULL;
    
        i = 1;
        j = 0;

        while (i < argc)
        {
            while (argv[i][j] == argv[i+1][j] && argv[i][j] != '\0' && argv[i+1][j] != '\0')
            {
                while ((argv[i][j] - argv[i+1][j]) > 0) // si argument1 > argument2
                {
                    temp[i][j] = argv[i][j];
                    argv[i][j] = argv[i+1][j];
                    argv[i+1][j] = temp[i][j]; 
                    j++;
                }
                i++;
            }
        }

        i = 1;
        while (i < argc)
        {
            ft_putstr(argv[i]);
            ft_putchar('\n');
            i++;
        }
        return(0);
        
}
*/