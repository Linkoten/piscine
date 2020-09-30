/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 19:52:30 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/17 19:52:35 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	ft_strswap(char **str1, char **str2)
{
	char *c;

	c = *str2;
	*str2 = *str1;
	*str1 = c;
}

int		ft_compare(char *str1, char *str2)
{
	while (*str1 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	ft_sort_str_tab(char **str, int size)
{
	int	i;
	int	j;

	j = 0;
	i = -1;
	while (++i < size)
	{
		j = i;
		while (++j < size)
			if (ft_compare(str[i], str[j]) > 0)
				ft_strswap(&str[i], &str[j]);
	}
}

int		main(int argc, char **argv)
{
	int i;

	ft_sort_str_tab(argv + 1, argc - 1);
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
	}
	return (0);
}
