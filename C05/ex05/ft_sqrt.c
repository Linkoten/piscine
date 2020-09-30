/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 17:44:56 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/21 14:36:55 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i <= nb / i && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		if (i * i > nb)
			return (0);
		i++;
	}
	return (0);
}
