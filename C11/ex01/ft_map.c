/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 12:22:29 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/28 15:54:27 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *r_tab;

	if (!(r_tab = (int *)malloc(sizeof(int) * length)))
		return (0);
	i = 0;
	while (i < length)
	{
		r_tab[i] = f(tab[i]);
		i++;
	}
	return (r_tab);
}
