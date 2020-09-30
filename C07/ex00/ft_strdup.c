/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 21:17:20 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/26 12:34:30 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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

char	*ft_strdup(char *src)
{
	int		size_src;
	char	*dest;

	size_src = ft_strlen(src);
	if (!(dest = (char*)malloc(size_src * sizeof(char))))
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}
