/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:35:59 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/29 17:55:45 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void ft_print_error(char *bin, char *path, int error)
{
	ft_putstr(2, bin);
	ft_putstr(2, ": ");
	ft_putstr(2, path);
	ft_putstr(2, ": ");
	if (error == 9)
		ft_putstr(2, "No such file or directory");
	else
		ft_putstr(2, strerror(error));
	ft_putstr(2, "\n");
}
