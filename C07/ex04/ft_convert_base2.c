/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:18:53 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/28 15:17:33 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		strlen_and_cmp(char *str);

int		ft_nbrlen(unsigned int n, unsigned int base_size)
{
	int i;

	i = 0;
	if (n < base_size)
		return (1);
	if (n == 0)
		return (2);
	while (n >= 1)
	{
		n = n / base_size;
		i++;
	}
	return (i);
}

char	*ft_create_malloc(int nbr, char *str, int *str_len, int baseto_len)
{
	int unsigned nb;

	if (nbr < 0)
		nb = -nbr;
	else
		nb = nbr;
	*str_len = ft_nbrlen(nb, baseto_len);
	if (nbr < 0)
		*str_len += 1;
	if (!(str = (char *)malloc(*str_len * sizeof(char))))
		return (0);
	return (str);
}

char	*ft_add_convert(char *str, int nbr, char *base_to)
{
	unsigned int	n;
	int				str_len;
	int				*p_str_len;
	int				baseto_len;

	baseto_len = strlen_and_cmp(base_to);
	p_str_len = &str_len;
	str = ft_create_malloc(nbr, base_to, p_str_len, baseto_len);
	str[str_len] = '\0';
	n = nbr;
	if (nbr == 0)
		str[0] = base_to[0];
	if (nbr < 0)
	{
		n = -nbr;
		str[0] = '-';
	}
	if (n >= 0)
		while (n >= 1)
		{
			str_len--;
			str[str_len] = base_to[(n % baseto_len)];
			n /= baseto_len;
		}
	return (str);
}
