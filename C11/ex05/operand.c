/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 18:18:23 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/28 11:39:16 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int		ft_add(int nb1, int nb2)
{
	int x;

	x = nb1 + nb2;
	return (x);
}

int		ft_minus(int nb1, int nb2)
{
	int x;

	x = nb1 - nb2;
	return (x);
}

int		ft_multi(int nb1, int nb2)
{
	int x;

	x = nb1 * nb2;
	return (x);
}

int		ft_div(int nb1, int nb2)
{
	int x;

	x = nb1 / nb2;
	return (x);
}

int		ft_modul(int nb1, int nb2)
{
	int x;

	x = nb1 % nb2;
	return (x);
}
