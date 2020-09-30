/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 12:31:58 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/28 12:45:41 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	j = 0;
	i = -1;
	while (tab[++i] != 0)
	{
		j = i;
		while (tab[++j] != 0)
			if (ft_compare(tab[i], tab[j]) > 0)
				ft_strswap(&tab[i], &tab[j]);
	}
}
