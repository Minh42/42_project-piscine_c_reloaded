/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:32:40 by minh              #+#    #+#             */
/*   Updated: 2017/11/17 15:36:18 by minh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"

void    ft_pustr(char *str)
{
    while(*str)
        write(1, str++, 1);
}

t_bool  ft_is_even(int nbr)
{
   return ((EVEN(nbr)) ? TRUE : FALSE);
}

int     main(int argc, char **argv)
{
    (void)argv;
    if (ft_is_even(argc - 1) == TRUE)
        ft_pustr(EVEN_MSG);
    else
        ft_pustr(ODD_MSG);
    return(SUCCESS);
}
