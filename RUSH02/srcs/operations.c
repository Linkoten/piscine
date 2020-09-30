/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 22:18:02 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/27 13:05:12 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void ft_find_put(char *tab, char *dict)
{
	int		i;
	char	find[3];
	char	*p_find;
	char	c;

	p_find = find;
	c = '0';
	i = 0;
	if (tab[0] != '0')
	{
		ft_strstr(dict, &tab[0]);
		write(1, " ", 1);
		ft_strstr(dict, "100");
	}
	if (tab[1] == '1')
	{
		p_find = ft_u_str_cat(p_find, &tab[1], &tab[2]);
		ft_strstr(dict, p_find);
	}
	if (tab[1] != '1' && tab[1] != '0')
	{

		p_find = ft_u_str_cat(p_find, &tab[1], "0");
		ft_strstr(dict, p_find);
	}
	if (tab[2] != '0' && tab[1] != '1')
	{
		ft_strstr(dict, &tab[2]);
	}

}
/*
void	ft_find_put(char *tab, char *dict)
{
		



}*/
