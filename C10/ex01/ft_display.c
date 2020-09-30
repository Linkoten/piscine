/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 17:26:47 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/29 19:58:27 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	ft_read_file(char *arg)
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];

	if(!(fd = open(arg, O_RDONLY)))
		return (-1);
	while ((ret = read(fd, buf, BUF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		ft_putstr(1, buf);
	}
	close(fd);
	return (ret);
}

void ft_cat(void)
{
	char c;
	int ret;

	while ((ret = read(0, &c, 1) > 0))
		write(1, &c, 1);
}
