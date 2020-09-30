/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 13:13:23 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/17 16:10:01 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 1)
		while (argv[++i])
		{
			ft_putstr(argv[i]);
			ft_putstr("\n");
		}
	return (0);
}
