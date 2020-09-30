/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 10:32:52 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/13 10:14:33 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *nb1, int *nb2)
{
	int	c;

	c = *nb2;
	*nb2 = *nb1;
	*nb1 = c;
}

void	ft_compare(int *nb1, int *nb2)
{
	if (*nb2 <= *nb1)
	{
		ft_swap(nb1, nb2);
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = -1;
	while (++i < size - 1)
	{
		j = i;
		while (++j <= size - 1)
		{
			ft_compare(&tab[i], &tab[j]);
		}
	}
}
