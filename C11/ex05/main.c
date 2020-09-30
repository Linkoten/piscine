/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 18:18:05 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/29 12:34:56 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

void	result_op(int nb1, int nb2, int (*f)(int, int))
{
	int result;

	result = f(nb1, nb2);
	ft_putnbr(result);
}

int		main(int ac, char **av)
{
	int				nb1;
	int				nb2;
	static char		operands[6] = "+-*/%\0";
	static int		(*tab_p_fct[5])(int, int) = \
	{&ft_add, &ft_minus, &ft_multi, &ft_div, &ft_modul};
	int				get_op;

	if (ac != 4)
		return (0);
	nb1 = ft_atoi(av[1]);
	nb2 = ft_atoi(av[3]);
	get_op = check_operand(av[2], operands, nb2);
	if (get_op == -1)
		return (0);
	result_op(nb1, nb2, tab_p_fct[get_op]);
	write(1, "\n", 1);
	return (0);
}
