/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpauline <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 00:22:50 by jpauline          #+#    #+#             */
/*   Updated: 2020/09/20 00:26:01 by jpauline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "tab.c"

int		**malloc_tab(void);
void	free_tab(int **tab, int **tab_init);
void	print_tab(int **tab);
void	init_tab_rules(int **tab, int **tab_init, char *str);
void	first_params(int **tab_init);
void	ft_rec_rush(int value, int xy, int **tab, int **tab_init);

int main (int ac, char **av)
{
	int **tab;
	int **tab_init;
	int i;

	(void) ac;
	tab = malloc_tab();
	tab_init = malloc_tab();
	init_tab_rules(tab, tab_init, av[1]);
	first_params(tab_init);
	print_tab(tab);
	print_tab(tab_init);
//	free_tab(tab, tab_init);
	printf("\n\n\n");
	i = 0;
	while (++i < 5)
		ft_rec_rush(i, 11, tab, tab_init);
//	ajouter une variable a passer a 1 si on trouve une solution, sinon : error
//	mettre value avec x et y dans la fonction recurcive pour liberer un param	
	printf("ERROR");
	return (0);
}

int check_col_up(int x, int **tab)
{
	int	max;
	int	i;
	int	visib;

	max = 0;
	i = 0;
	visib = 0;
	while (++i < 5)
	{
		if (tab[i][x] > max)
		{
			visib++;
			max = tab[i][x];
		}
	}
	if ((visib) && (visib != tab[0][x]))
		return (0);
	return (1);
}

int	check_col_down(int x, int **tab)
{
	int	max;
	int	i;
	int	visib;

	max = 0;
	i = 5;
	visib = 0;
	while (--i > 0)
	{
		if (tab[i][x] > max)
		{
			visib++;
			max = tab[i][x];
		}
	}
	if ((visib) && (visib != tab[5][x]))
		return (0);
	return (1);
}

int	check_line_left(int y, int **tab)
{
	int	max;
	int	i;
	int	visib;
	
	max = 0;
	i = 0;
	visib = 0;
	while (++i < 5)
	{
		if (tab[y][i] > max)
		{
			visib++;
			max = tab[y][i];
		}
	}
	if ((visib) && (visib != tab[y][0]))
		return (0);
	return (1);
}

int	check_line_right(int y, int **tab)
{
	int	max;
	int	i;
	int	visib;

	max = 0;
	i = 5;
	visib = 0;
	while (--i > 0)
	{
		if (tab[y][i] > max)
		{
			visib++;
			max = tab[y][i];
		}
	}
	if ((visib) && (visib != tab[y][5]))
		return (0);
	return(1);
}

void	ft_rec_rush(int value, int x, int **tab, int **tab_init)
{
	int	y;
	int	i;
	int	max;
	int	visib;

	y = (x / 10);
	x = (x % 10);
	
	if ((tab_init[y][x] != 0) && (value != tab_init[y][x]))
		return;
	i = 0;
	while (++i < x)
		if (tab[y][i] == value)
			return;
	i = 0;
	while (++i < y)
		if (tab[i][x] == value)
			return;

	tab[y][x] = value;

	if ((x != 4) && (y != 4))
	{
		i = 0;
		while (++i < 5)
			ft_rec_rush(i, (x + 1) + (y * 10), tab, tab_init);
	}
	else if ((x == 4) && (y != 4))
	{	
		if ((!(check_line_left(y, tab))) || (!(check_line_right(y, tab))))
			return;
		i = 0;
		while (++i < 5)
			ft_rec_rush(i, 1 + ((y + 1) * 10), tab, tab_init);
	}
	else if ((x != 4) && (y == 4))
	{
		if ((!(check_col_up(x, tab))) || (!(check_col_down(x, tab))))
			return;
		i = 0;
		while (++i < 5)
			ft_rec_rush(i, x + 1 + (y * 10), tab, tab_init);
	}
	else if ((x == 4) && (y == 4))
	{
		if ((!(check_line_left(y, tab))) || (!(check_line_right(y, tab)))
			|| (!(check_col_up(x, tab))) || (!(check_col_down(x, tab))))
			return;
		print_tab(tab);
		printf("B R A V O\n");
	}
}
