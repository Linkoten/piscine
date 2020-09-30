/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 18:27:31 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/10 19:22:30 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int number;

	if (nb < 0)
	{
		ft_putchar('-');
		number = -nb;
	}
	else
	{
		number = nb;
	}
	if (number > 9)
	{
		ft_putnbr(number / 10);
		ft_putchar(number % 10 + '0');
	}
	else
	{
		ft_putchar(number + '0');
	}
}
