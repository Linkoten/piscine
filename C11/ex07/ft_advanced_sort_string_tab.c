/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 12:46:31 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/29 12:36:22 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strswap(char **str1, char **str2)
{
	char *c;

	c = *str1;
	*str1 = *str2;
	*str2 = c;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (tab[i])
		i++;
	while (--i >= 0)
	{
		j = 0;
		while (++j <= i)
			if (cmp(tab[j - 1], tab[j]) > 0)
				ft_strswap(&tab[j - 1], &tab[j]);
	}
}
