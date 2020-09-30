/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:26:23 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/27 13:05:11 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	**create_tab(char *number, int number_len, int *nb_case)
{
	char **tab;
	int i;
	int rang;
	
	rang = 0;
	*nb_case = (number_len / 3) + 1;
	i = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (*nb_case))))
				return (0);
	while (i < *nb_case)	
	{
		if (!(tab[i] = (char*)malloc(sizeof(char) * 3)))
			return (0);
		i++;
	}
	tab = add_first_case(number, tab, number_len, &rang);
	tab = add_in_tab(number, nb_case, &rang, tab);
	return (tab);
}

char	**add_first_case(char *number, char **tab, int number_len, int *rang)
{
	int add_z;

	add_z = number_len % 3;
	if (add_z == 1)
	{	
		tab[0][0] = '0';
		tab[0][1] = '0';
		tab[0][2] = number[0];
		*rang = 1;
	}
	else if (add_z == 2)
	{
		tab[0][0] = '0';
		tab[0][1] = number[0];
		tab[0][2] = number[1];
		*rang = 2;
	}
	else
	{
		tab[0][0] = number[0];
		tab[0][1] = number[1];
		tab[0][2] = number[2];
		*rang = 3;
	}
	return (tab);
}

char	**add_in_tab(char *number, int *nb_case, int *rang, char **tab)
{
	int i;
	int j;
	int x;
		
	i = *rang;
	j = 1;
	x = 0;
	while (j < *nb_case)
	{
		while (x < 3)
		{
			tab[j][x] = number[i];
			x++;
			i++;
		}
		j++;
		i++;
	}
	return (tab);
}
