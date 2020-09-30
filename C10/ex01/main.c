/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:03:32 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/29 22:13:19 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int main(int ac, char **av)
{
	int i;
	char *bin;

	bin = basename(av[0]);
	i = 1;
	errno = 0;
	if (ac == 1)
		ft_cat();
	while (i < ac)
	{
		if (ft_read_file(av[i]) < 0)
			ft_print_error(bin, av[i], errno);
		i++;
	}
	return (0);
}
