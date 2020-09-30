/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 13:22:31 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/17 16:09:17 by pbrochar         ###   ########.fr       */
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

	i = argc;
	if (argc > 1)
		while (--i > 0)
		{
			ft_putstr(argv[i]);
			ft_putstr("\n");
		}
	return (0);
}
