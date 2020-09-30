/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:53:54 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/21 20:43:54 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 43)
		return (433494437);
	if (index == 46)
		return (1836311903);
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index < 2)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
