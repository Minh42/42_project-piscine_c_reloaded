/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpham <mpham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:49:59 by mpham             #+#    #+#             */
/*   Updated: 2017/11/20 14:30:33 by mpham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int				i;
	unsigned long	resultat;

	i = 1;
	resultat = 1;
	if (nb == 0)
		return (1);
	if (nb > 12 || nb < 0)
		return (0);
	while (i <= nb)
	{
		resultat = resultat * i;
		i++;
	}
	return (resultat);
}
