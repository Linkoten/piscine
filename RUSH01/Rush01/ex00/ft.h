/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daziza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 12:04:33 by daziza            #+#    #+#             */
/*   Updated: 2020/09/20 12:18:08 by daziza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef FT_H
# define FT_H

int		**malloc_tab(void);
int		check_string(char *str);
void	free_tab(int **tab, int **tab_init);
void	print_tab(int **tab);
void	print_result(int **tab);
void	init_tab_rules(int **tab, int **tab_init, char *str);
void	first_params(int **tab_init);

#endif
