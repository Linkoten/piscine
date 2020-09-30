/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daziza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 12:02:09 by daziza            #+#    #+#             */
/*   Updated: 2020/09/20 12:30:46 by daziza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			**malloc_tab(void)
{
	int **tab;
	int i;
	int j;

	if (!(tab = (int **)malloc(sizeof(int *) * 6)))
		return (NULL);
	i = 0;
	while (i < 6)
	{
		if (!(tab[i] = (int *)malloc(sizeof(int) * 6)))
			return (NULL);
		i++;
	}
	i = 0;
	j = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
			tab[i][j++] = 0;
		i++;
	}
	return (tab);
}

void		free_tab(int **tab, int **tab_init)
{
	int i;

	i = 0;
	while (i < 6)
	{
		free(tab[i]);
		free(tab_init[i]);
		i++;
	}
	free(tab);
	free(tab_init);
}

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void		print_result(int **tab)
{
	int i;
	int j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			ft_putchar(48 + tab[i][j]);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
