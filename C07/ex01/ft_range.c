/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 21:45:51 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/24 15:49:11 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int				*tab;
	unsigned int	i;
	unsigned int	size;

	if (min >= max)
	{
		tab = NULL;
		return (0);
	}
	size = max - min;
	i = 0;
	if (!(tab = (int*)malloc(size * sizeof(int))))
		return (0);
	while (i < size)
		tab[i++] = min++;
	return (tab);
}
