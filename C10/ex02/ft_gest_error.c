/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gest_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 18:52:06 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/29 22:48:01 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_htail.h"

void	ft_offset_error(char *av, char *bin)
{
	ft_putstr(2, bin);
	ft_putstr(2, ": illegal offset -- ");
	ft_putstr(2, av);
	ft_putstr(2, "\n");
}

void	ft_print_error(char *bin, char *path, int error)
{
	if (error ==2)
	{
		ft_putstr(2, bin);
		ft_putstr(2, ": ");
		ft_putstr(2, path);
		ft_putstr(2, ": ");
		ft_putstr(2, "No such file or directory");
		ft_putstr(2, "\n");
	}
}
