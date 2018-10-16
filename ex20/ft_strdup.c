/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpham <mpham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:00:30 by minh              #+#    #+#             */
/*   Updated: 2017/11/20 15:27:20 by mpham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	char	*s1;
	int		i;
	int		len;

	len = 0;
	i = 0;
	if (!src)
		return (NULL);
	while (src[len])
		len++;
	s1 = (char *)malloc(sizeof(*s1) * (len + 1));
	while (i < len)
	{
		s1[i] = src[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
