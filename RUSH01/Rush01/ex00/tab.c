/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daziza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 19:01:11 by daziza            #+#    #+#             */
/*   Updated: 2020/09/20 12:29:11 by daziza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	first_params(int **tab_init)
{
	int i;
	int j;

	i = -1;
	while (i++ < 6)
		if (tab_init[0][i] == 1)
			tab_init[1][i] = 4;
	i = -1;
	while (i++ < 6)
		if (tab_init[5][i] == 1)
			tab_init[4][i] = 4;
	i = -1;
	while (++i < 6)
		if (tab_init[i][0] == 1)
			tab_init[i][1] = 4;
	i = -1;
	while (++i < 6)
		if (tab_init[i][5] == 1)
			tab_init[i][4] = 4;
}

void	get_tab_rules(int **tab, int i, int k, char *str)
{
	int tmp;

	tmp = i + 8;
	while(str[i] && i < tmp)
	{
		if (str[i] >= '0' && str[i] <= '4' && i < 8)
			tab[0][k++] = str[i] - 48;

		if (str[i] >= '0' && str[i] <= '4' && i > 7 && i < 16)
			tab[5][k++] = str[i] - 48;

		if (str[i] >= '0' && str[i] <= '4' && i > 15 && i < 24)
			tab[k++][0] = str[i] - 48;

		if (str[i] >= '0' && str[i] <= '4' && i > 23 && i < 32)
			tab[k++][5] = str[i] - 48;
		i++;
	}
}

/*
void	print_tab(int **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			printf("%d", tab[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
*/
void	init_tab_rules(int **tab, int **tab_init, char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[k++])
	{
		if (i == 0 || i == 8 || i == 16 || i == 24)
		{
			get_tab_rules(tab, i, 1, str);
			get_tab_rules(tab_init, i, 1, str);
			i += 8;
		}
	}
}

int	check_string(char *str)
{
	while (*str)
	{
		if (*str != ' ' && (*str < '1' || *str > '4'))
		{
			write(1, "Error", 5);
			return (1);
		}
		str++;
	}
	return (0);
}
