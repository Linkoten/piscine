/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 14:25:21 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/29 12:36:40 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int b;
	int c;

	if (length < 3)
		return (1);
	i = 1;
	while (i < length && !(b = f(tab[i - 1], tab[i])))
		i++;
	while (i < length)
	{
		c = f(tab[i - 1], tab[i]);
		if ((b < 0 && c > 0) || (b > 0 && c < 0))
			return (0);
		i++;
	}
	return (1);
}
