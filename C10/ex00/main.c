/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:03:32 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/28 17:56:01 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int main(int ac, char **av)
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];

	if(!(ft_check_error(ac, av[1], &fd)))
		return (0);
	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
		{
		buf[ret] = '\0';
		ft_putstr(1, buf);
	}

	return (0);
}
