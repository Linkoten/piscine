/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 19:26:02 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/30 19:32:09 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hhexdump.h"

void ft_print_error(char *bin, char *path, int error)
{
	ft_putstr(2, bin);
	ft_putstr(2, ": ");
	ft_putstr(2, path);
	ft_putstr(2, ": ");
	ft_putstr(2, "No such file or directory\n");
	ft_putstr(2, strerror(error));
	ft_putstr(2, "\n");
}
