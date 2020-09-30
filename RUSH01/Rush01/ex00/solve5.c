/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpauline <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 00:22:50 by jpauline          #+#    #+#             */
/*   Updated: 2020/09/20 12:51:18 by jpauline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "tab.c"

int		**malloc_tab(void);
void	free_tab(int **tab, int **tab_init);
void	print_tab(int **tab);
void	init_tab_rules(int **tab, int **tab_init, char *str);
void	first_params(int **tab_init);
void	ft_rec_rush(int value, int xy, int **tab, int **tab_init);
int		check_col_up(int x, int **tab);
int		check_col_down(int x, int **tab);
int		check_line_left(int y, int **tab);
int		check_line_right(int y, int **tab);


int		main(int ac, char **av)
{
	int **tab;
	int **tab_init;
	int i;

	(void)ac;
	tab = malloc_tab();
	tab_init = malloc_tab();
	init_tab_rules(tab, tab_init, av[1]);
	first_params(tab_init);
	i = 0;
	while (++i < 5)
		ft_rec_rush(i, 11, tab, tab_init);
	if (!(tab_init[0][0]))
		write(1, "Error\n", 6);
	free_tab(tab, tab_init);
	return (0);
}

int		check_init_n_double(int value, int x, int **tab, int **tab_init)
{
	int	y;
	int	i;

	y = (x / 10);
	x = (x % 10);
	if ((tab_init[y][x] != 0) && (value != tab_init[y][x]))
		return (0);
	i = 0;
	while (++i < x)
		if (tab[y][i] == value)
			return (0);
	i = 0;
	while (++i < y)
		if (tab[i][x] == value)
			return (0);
	return (1);
}

void	ft_launch(int x, int **tab, int **tab_init)
{
	int	i;

	i = 0;
	while (++i < 5)
		ft_rec_rush(i, x, tab, tab_init);
}

void	ft_rec_check(int x, int y, int **tab, int **tab_init)
{
	if ((x != 4) && (y != 4))
		ft_launch((x + 1) + (y * 10), tab, tab_init);
	else if ((x == 4) && (y != 4))
	{
		if ((!(check_line_left(y, tab))) || (!(check_line_right(y, tab))))
			return ;
		ft_launch(1 + ((y + 1) * 10), tab, tab_init);
	}
	else if ((x != 4) && (y == 4))
	{
		if ((!(check_col_up(x, tab))) || (!(check_col_down(x, tab))))
			return ;
		ft_launch(x + 1 + (y * 10), tab, tab_init);
	}
	else if ((x == 4) && (y == 4))
	{
		if ((!(check_line_left(y, tab))) || (!(check_line_right(y, tab)))
			|| (!(check_col_up(x, tab))) || (!(check_col_down(x, tab))))
			return ;
		if (!(tab_init[0][0]))
			print_tab(tab); /* mettre print_result(tab) */
		tab_init[0][0] = 1;
	}
}

void	ft_rec_rush(int value, int x, int **tab, int **tab_init)
{
	int	y;

	if (!(check_init_n_double(value, x, tab, tab_init)))
		return ;
	y = (x / 10);
	x = (x % 10);
	tab[y][x] = value;
	ft_rec_check(x, y, tab, tab_init);
}
