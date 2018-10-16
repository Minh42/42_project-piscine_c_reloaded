/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpham <mpham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 10:59:46 by minh              #+#    #+#             */
/*   Updated: 2017/11/20 14:44:21 by mpham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void			ft_putchar(char c);

static	int		my_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

static	char	*afficher(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 0;
	}
	return (0);
}

int				main(int argc, char **argv)
{
	char	*swap;
	int		i;

	swap = 0;
	i = 1;
	while (i < argc - 1)
	{
		while (my_strcmp(argv[i], argv[i + 1]) > 0)
		{
			swap = argv[i + 1];
			argv[i + 1] = argv[i];
			argv[i] = swap;
			i = 1;
		}
		i++;
	}
	afficher(argc, argv);
	return (0);
}
