/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htail.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 18:34:50 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/29 22:04:26 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HTAIL_H
# define FT_HTAIL_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>
# include <libgen.h>
# include <stdio.h>
# include <string.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_putstr(int out, char *str);
int		ft_str_is_numeric(char *str);
int		ft_atoi(char *str);
void	ft_offset_error(char *av, char *bin);
int		ft_calcul_tail(char *arg);
int		ft_print_tail(char *av, int n_bytes);
char	*ft_create_malloc(int n_bytes);
char	*ft_strcat(char *dest, char *src);
void	ft_print_sep(char *av);
void	ft_tail_op(int ac, char **av, char *bin);
void	ft_itail(void);
void	ft_print_error(char *bin, char *path, int error);

#endif

