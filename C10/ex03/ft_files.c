/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 15:02:14 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/30 19:32:25 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hhexdump.h"

int	ft_print_hexdump(char *av)
{
	char buf[17];
	char buf2[17];
	int fd;
	int i;
	int ret;
	int a;
	
	i = 0;
	errno = 0;
	fd = open(av, O_RDONLY);
	if (fd < 0)
		return (-1);
	while ((ret = read(fd, buf, 16)) > 0)
	{
		buf[ret] = '\0';
		if ((strcmp(buf, buf2) == 0) && a == 0)
		{	
			a = 1;
			ft_putchar('*');
			ft_putchar('\n');
		}
		else if (strcmp(buf, buf2))
		{
			ft_print_line(i, buf);
			a = 0;
		}
		ft_strcpy(buf2, buf);
		i = i + ret;
	}
	counter_hex(i);
	ft_putchar('\n');
	close(fd);
	return (ret);
}

void ft_print_line(int i, char *buf)
{
	counter_hex(i);
	convert_hex(buf);
	ft_putchar('|');
	ft_putstr(1, buf);
	ft_putchar('|');
	ft_putchar('\n');
}
/*
char *ft_cmp_isspace(char *buf)
{
	int i;

	i = 0;
	while(buf[i])
	{
		if (buf[i] >= 9 && buf[i] <= 13)
			buf[i] = 32;
		i++;
	}
	return (buf);
}*/
