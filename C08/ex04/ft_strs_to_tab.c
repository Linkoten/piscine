/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 17:53:00 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/28 15:41:11 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char					*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = -1;
	while (src[++i])
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str *s_tab;

	if (!(s_tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		s_tab[i].size = ft_strlen(av[i]);
		s_tab[i].str = av[i];
		if (!(s_tab[i].copy =
				(char*)malloc(sizeof(char) * ft_strlen(s_tab[i].str) + 1)))
			return (NULL);
		s_tab[i].copy = ft_strcpy(s_tab[i].copy, s_tab[i].str);
	}
	s_tab[ac].size = 0;
	s_tab[ac].str = 0;
	s_tab[ac].copy = 0;
	return (s_tab);
}
