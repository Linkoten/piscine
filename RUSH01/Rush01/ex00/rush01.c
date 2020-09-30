/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daziza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 11:36:22 by daziza            #+#    #+#             */
/*   Updated: 2020/09/20 12:30:47 by daziza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int main (int ac, char **av)
{
	int **tab;
	int **tab_init;

	if (check_string(av[1]))
		return (0);
	tab = malloc_tab();
	tab_init = malloc_tab();
	init_tab_rules(tab, tab_init, av[1]);
	first_params(tab_init);
//	print_tab(tab_init);
	print_result(tab);
	free_tab(tab, tab_init);
	return (0);
}
