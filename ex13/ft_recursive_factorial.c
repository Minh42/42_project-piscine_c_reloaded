/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpham <mpham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:37:27 by mpham             #+#    #+#             */
/*   Updated: 2017/11/20 14:34:36 by mpham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int				i;
	unsigned long	resultat;

	i = 1;
	resultat = 0;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	else
	{
		resultat = nb * ft_recursive_factorial(nb - 1);
	}
	return (resultat);
}
