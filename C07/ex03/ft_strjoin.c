/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 15:39:54 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/28 16:11:57 by pbrochar         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_is_null(void)
{
	char	*finalstr;

	finalstr = (char *)malloc(sizeof(char) * 1);
	finalstr[0] = '\0';
	return (finalstr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	int		i;
	char	*finalstr;

	if (size == 0 || !strs)
		return (ft_is_null());
	i = -1;
	while (++i < size)
		total_size = total_size + ft_strlen(strs[i]);
	total_size = total_size + (ft_strlen(sep) * (size - 1));
	if (!(finalstr = (char*)malloc((total_size + 1) * sizeof(char))))
		return (0);
	i = -1;
	finalstr[0] = '\0';
	while (++i < size)
	{
		ft_strcat(finalstr, strs[i]);
		if (i < size - 1 && strs[i])
			ft_strcat(finalstr, sep);
	}
	finalstr[total_size] = '\0';
	return (finalstr);
}
