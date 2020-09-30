/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 10:04:33 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/24 15:52:15 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int				*tab;
	unsigned int	i;
	unsigned int	size;

	if (min >= max)
		return (0);
	size = max - min;
	i = 0;
	if (!(tab = (int*)malloc(size * sizeof(int))))
		return (0);
	while (i < size)
		tab[i++] = min++;
	return (tab);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	unsigned int size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(*range = ft_range(min, max)))
		return (-1);
	size = max - min;
	return (size);
}
