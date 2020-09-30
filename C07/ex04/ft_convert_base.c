/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:07:25 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/28 15:50:30 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_add_convert(char *str, int nbr, char *base_to);

int		strlen_and_cmp(char *str)
{
	int	i;
	int j;

	if (str[0] == 0)
		return (1);
	i = -1;
	while (str[++i])
	{
		j = i;
		while (str[++j])
		{
			if (str[i] == str[j] || str[0] == '+' || str[j] == '+'
					|| str[0] == '-' || str[j] == '-'
					|| str[0] == 32 || (str[0] >= 9 && str[0] <= 13)
					|| str[j] == 32 || (str[j] >= 9 && str[j] <= 13)
					|| str[0] < 32 || str[j] > 127 || str[0] > 127
					|| str[j] < 32)
				return (1);
		}
	}
	return (i);
}

int		find_in_base(char c, char *base)
{
	int i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == c)
		{
			return (i);
		}
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int				base_len;
	int				i;
	int				s;
	unsigned int	nbr;

	base_len = strlen_and_cmp(base);
	i = 0;
	nbr = 0;
	s = 1;
	if (base_len <= 1)
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] && find_in_base(str[i], base) != -1)
	{
		nbr = (nbr * base_len) + find_in_base(str[i], base);
		i++;
	}
	return (nbr * s);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		int_nbr;
	char	*number;
	int		i;

	number = NULL;
	i = 0;
	if (strlen_and_cmp(base_from) == 1 || strlen_and_cmp(base_to) == 1)
		return (NULL);
	int_nbr = ft_atoi_base(nbr, base_from);
	number = ft_add_convert(number, int_nbr, base_to);
	return (number);
}
