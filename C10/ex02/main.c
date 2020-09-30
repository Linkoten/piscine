/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 18:25:55 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/29 22:44:24 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_htail.h"

void	ft_tail_op(int ac, char **av, char *bin)
{
	int i;
	int n_bytes;

	errno = 0;
	n_bytes = ft_atoi(av[2]);
	if (ac == 4)
		if (ft_print_tail(av[3], n_bytes) < 0)
			ft_print_error(bin, av[3], errno);
	i = 3;
	if (ac == 3)
		ft_itail();
	if (ac > 4)
	{
		while (i < ac)
		{
			ft_print_sep(av[i]);
			if(ft_print_tail(av[i], n_bytes) < 0)
				ft_print_error(bin, av[i], errno);
			if (i < ac - 1)
				write(1, "\n", 1);
			i++;
		}
	}
}

void ft_itail(void)
{
	char c;
	int ret;

	while ((ret = read(0, &c, 1) > 0))
		write(1, "", 0);
}

int main(int ac, char **av)
{
	char	*bin;
	
	errno = 0;
	bin = basename(av[0]);
	if (ac < 3 || ft_strcmp(av[1], "-c"))
		return (0);
	if (!ft_str_is_numeric(av[2]))
	{
		ft_offset_error(av[2], bin);
		return (0);
	}
	ft_tail_op(ac, av, bin);
}
