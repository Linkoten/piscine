/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 19:00:28 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/10 19:05:15 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char z)
{
	write(1, &z, 1);
}

void	ft_print_comb2(void)
{
	char	left_number;
	char	right_number;

	left_number = 0;
	while (left_number <= 97)
	{
		right_number = left_number + 1;
		while (right_number < 100)
		{
			ft_putchar(left_number / 10 + '0');
			ft_putchar(left_number % 10 + '0');
			write(1, " ", 1);
			ft_putchar(right_number / 10 + '0');
			ft_putchar(right_number % 10 + '0');
			write(1, ", ", 2);
			right_number++;
		}
		left_number++;
	}
	write(1, "98 99", 5);
}
