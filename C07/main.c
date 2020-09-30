/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 09:58:09 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/28 10:01:20 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
#include <stdio.h>

int main(int ac, char **av)
{	
	if (ac == 4)
		printf("%s", ft_convert_base(av[1], av[2], av[3]));	
	return (0);
}
