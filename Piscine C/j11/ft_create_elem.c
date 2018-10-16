/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/23 14:52:15 by minh              #+#    #+#             */
/*   Updated: 2017/12/23 14:58:38 by minh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list      *ft_create_elem(void *data)
{
    t_list  *elem;

    elem = (t_list*)malloc(sizeof(t_list));
    if (elem)
    {
        elem->date = date;
        elem->next = NULL;
    }
    return (elem);
}