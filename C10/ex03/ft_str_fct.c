/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_ftc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 13:02:16 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/30 19:18:39 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hhexdump.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(int out, char *str)
{
	int a;

	a = 0;

	while (str[a])
	{
		if(str[a] < 32 || str[a] == 127)
			str[a] = '.';
		a++;
	}
	write(out, str, ft_strlen(str));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);

}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1[i] || !s2[i])
	{
		return (s1[i] - s2[i]);
	}
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	while (src[++i])
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
