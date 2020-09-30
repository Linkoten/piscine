/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grannou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 14:15:29 by grannou           #+#    #+#             */
/*   Updated: 2020/09/27 14:35:54 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"


int		ft_print_letters(char *number, char *dict_name)
{
	char	*dict;
	int		number_len;
	char	**number_tab;
	int		*p_nb_case;
	int		nb_case;
	int		j;
	
	dict = NULL;
	nb_case = 0;
	p_nb_case = &nb_case;
	number_len = ft_strlen(number);
	if (!(dict = ft_malloc_dict(dict, dict_name)))
		return (0);
	j = 0;
	number_tab = create_tab(number, number_len, p_nb_case);
	while (j < nb_case)
	{
		ft_find_put(number_tab[j], dict);
		write(1, " ", 1);
		j++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc == 1 || argc > 3)
		print_error();
	if (argc == 2)
	{
		if (!is_numeric(argv[1]))
		{
			print_error();
			return (0);
		}
		if (!(ft_print_letters(argv[1], "numbers.dict")))
				print_error();
	}
	if (argc == 3)
	{
		if (!is_dict_file(argv[1]) || !is_numeric(argv[2]))
		{
			print_error();
			return (0);
		}
		if (!(ft_print_letters(argv[2], argv[1])))
				print_error();
	}
	return (0);
}
