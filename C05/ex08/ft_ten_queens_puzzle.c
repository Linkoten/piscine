/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 11:40:49 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/21 20:48:03 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_int_tab(int tab[10])
{
	int		j;
	char	c;

	j = -1;
	while (++j <= 9)
	{
		c = tab[j] + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

void	recur(int tab[10], int nbr, int y, int nb_dame)
{
	int i;
	int a;
	int j;

	i = y - 1;
	a = 1;
	while (i >= 0)
	{
		if (tab[i] == nbr || tab[i] == nbr - a || tab[i] == nbr + a)
			return ;
		a++;
		i--;
	}
	tab[y] = nbr;
	nb_dame++;
	j = -1;
	if (nb_dame == 10 && y == 9)
	{
		put_int_tab(tab);
		return ;
	}
	i = -1;
	while (++i <= 9)
		recur(tab, i, y + 1, nb_dame);
	return ;
}

int		ft_ten_queens_puzzle(void)
{
	int tab[10];
	int i;

	i = -1;
	while (++i <= 9)
		recur(tab, i, 0, 0);
	return (724);
}
