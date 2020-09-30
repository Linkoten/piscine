/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 11:18:01 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/21 14:59:05 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 1;
	while (sqrt <= (nb / sqrt))
	{
		if (sqrt * sqrt == nb)
			return (0);
		if (sqrt * sqrt > nb)
			return (sqrt);
		sqrt++;
	}
	return (sqrt);
}

int	ft_is_prime(int nb)
{
	int i;

	i = ft_sqrt(nb);
	if ((nb != 2 && nb % 2 == 0) || nb == 0 || nb == 1 || nb < 0 || i == 0)
		return (0);
	if (nb == 2)
		return (1);
	while (i > 1)
	{
		if (nb % i != 0 && i % 2 != 0)
			i = i - 2;
		if (nb % i == 0 && i != 1)
			return (0);
		i--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		ft_is_prime(++nb);
	return (nb);
}
