/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 19:11:34 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/29 22:42:51 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_htail.h"

int ft_calcul_tail(char *arg)
{
	int fd;
	int ret;
	int i;
	char buf[25 + 1];

	i = 0;
	if (!(fd = open(arg, O_RDONLY)))
		return (-1);
	while ((ret = read(fd, buf, 25)) > 0)
	{
		buf[ret] = '\0';
		i = i + ret;
	}
	close(fd);
	return (i);
}

int ft_print_tail(char *av, int n_bytes)
{
	int taille;
	int ret;
	int skip;
	int fd;
	char buf[1];
	int i;

	i = 0;
	errno = 0;
	taille = ft_calcul_tail(av);
	skip = taille - n_bytes;
	fd = open(av, O_RDONLY);
	if (fd == -1)
		return (-1);
	while ((ret = read(fd, buf, 1)) > 0)
	{
		if (i >= skip)
			ft_putstr(1, buf);
		i++;
	}
	close(fd);
	return (ret);
}

void	ft_print_sep(char *av)
{
	ft_putstr(1, "==> ");
	ft_putstr(1, av);
	ft_putstr(1, "  <==");
	ft_putstr(1, "\n");
}
