/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 13:10:51 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/21 17:20:07 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		strlen_and_cmp(char *str)
{
	int i;
	int j;

	i = -1;
	while (str[++i])
	{
		j = i;
		while (str[++j])
		{
			if (str[i] == str[j] || str[i] == '+' || str[j] == '+'
					|| str[i] == '-' || str[i] < 32 || str[i] == 127)
				return (1);
		}
	}
	return (i);
}

void	calcul_print_number(unsigned n, int base_len, char *base)
{
	if (n >= 1)
	{
		calcul_print_number((n / base_len), base_len, base);
		write(1, &base[n % base_len], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	int				base_len;

	base_len = strlen_and_cmp(base);
	if (base_len < 2)
		return ;
	if (nbr < 0)
	{
		n = -nbr;
		write(1, "-", 1);
	}
	else if (nbr > 0)
		n = nbr;
	if (base_len > 1 && n != 0)
		calcul_print_number(n, base_len, base);
	if (base_len > 1 && n == 0)
		write(1, &base[0], 1);
}

int main(int ac, char **av)
{
	(void)ac;
	ft_putnbr_base(atoi(av[1]), av[2]);
	return (0);

}
