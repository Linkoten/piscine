/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:35:59 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/28 17:57:06 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int ft_check_error(int ac, char *av1, int *fd)
{
	if (ac < 2)
	{
		ft_putstr(2, FNM);
		return (0);
	}
	if (ac > 2)
	{
		ft_putstr(2, TMA);
		return (0);
	}
	if (!(*fd = open(av1, O_RDONLY)))
	{
		ft_putstr(2, CRF);
		return (0);
	}
	return (1);
}
