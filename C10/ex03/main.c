/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:36:19 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/30 19:32:27 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hhexdump.h"

int main(int ac, char **av)
{
	int i;
	char *bin;

	errno = 0;
	bin = basename(av[0]);
	if (ac < 3 || ft_strcmp(av[1], "-C"))
		return (0);
	i = 2;
	while (i < ac)
	{
		if ((ft_print_hexdump(av[i]) < 0))
			ft_print_error(bin, av[i], errno);
		i++;
	}
	return (0);
}
