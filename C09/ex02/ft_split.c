/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:08:02 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/27 17:08:38 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str, int size)
{
	int		i;
	char	*tab;

	i = 0;
	while (str[i] && i < size)
		i++;
	if (!(tab = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	i = 0;
	while (str[i] && i < size)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

int		cmp(char *charset, char c)
{
	int i;

	i = -1;
	while (charset[++i])
		if (charset[i] == c)
			return (1);
	return (0);
}

int		word_len(char *str, char *charset)
{
	int a;

	a = 0;
	while (!(cmp(charset, str[a])) && str[a])
		a++;
	return (a);
}

int		word_count(char *str, char *charset)
{
	int i;
	int wc;

	wc = 0;
	i = 0;
	while (str[i])
	{
		if ((cmp(charset, str[i]) && !cmp(charset, str[i + 1]))
				|| (!cmp(charset, str[i]) && !str[i + 1]) || !str[i + 1])
			wc++;
		i++;
	}
	if (wc == 0)
		return (1);
	return (wc);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		j;
	int		i;

	if (!(tab =
			(char **)malloc(sizeof(char *) * (word_count(str, charset) + 1))))
		return (NULL);
	j = 0;
	i = 0;
	while (j < word_count(str, charset) && str[i])
	{
		while (cmp(charset, str[i]) && str[i])
			i++;
		if (!str[i])
			break ;
		tab[j] = ft_strdup(&str[i], word_len(&str[i], charset));
		j++;
		i += word_len(&str[i], charset);
	}
	tab[j] = 0;
	return (tab);
}
