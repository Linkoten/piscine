/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:54:36 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/30 19:32:16 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hhexdump.h"

void	convert_hex(char *str)
{
	int i;
	int a;

	static char *hexa = "0123456789abcdef";
	i = 0;
	a = 0;
	ft_putstr(1, "  ");
	while(str[i])
	{
		ft_putchar(hexa[str[i] / 16]);
		ft_putchar(hexa[str[i] % 16]);
		i++;
		a = a+3;
		(i == 8 || i == 16) ? ft_putstr(1,"  ") : ft_putstr(1," ");
	}
	if (a < 48)
	{
		while (a++ < 49)
			ft_putstr(1, " ");
	}
}

void	counter_hex(int nbr)
{
	static char hexa[16] = "0123456789abcdef";
	static char nbr_str[8] = "00000000";
	int x;
	
	x = 7;
	while (nbr >= 1)
	{
		nbr_str[x] = hexa[nbr % 16];
		nbr_str[x - 1] = hexa[nbr / 16];
		x--;
		nbr /= 16;
	}
	ft_putstr(1, nbr_str);
}
