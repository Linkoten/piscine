/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 22:19:28 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/28 11:33:28 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

# include <unistd.h>

int		ft_add(int nb1, int nb2);
int		ft_minus(int nb1, int nb2);
int		ft_multi(int nb1, int nb2);
int		ft_div(int nb1, int nb2);
int		ft_modul(int nb1, int nb2);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		check_operand(char *op, char *tab, int nb2);
void	result_op(int nb1, int nb2, int(*f)(int, int));

#endif
