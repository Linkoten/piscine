/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 18:18:32 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/29 21:42:46 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int		check_operand(char *op, char *tab, int nb2)
{
	int i;

	i = 0;
	if (op[0] == '/' && nb2 == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (-1);
	}
	if (op[0] == '%' && nb2 == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (-1);
	}
	while (tab[i])
	{
		if (tab[i] == op[0])
			return (i);
		i++;
	}
	write(1, "0\n", 2);
	return (-1);
}
