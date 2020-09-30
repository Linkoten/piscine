/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hhexdump.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 12:59:34 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/30 19:27:15 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HHEXDUMP_H
# define FT_HHEXDUMP_H

# include <unistd.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>
# include <libgen.h>
# include <stdio.h>
# include <string.h>

int		ft_strlen(char *str);
int		ft_print_hexdump(char *av);
void	ft_putstr(int out, char *str);
void	convert_hex(char *str);
void	counter_hex(int nbr);
void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
int		ft_print_hexdump(char *av);
char	*ft_strcpy(char *dest, char *src);
void	ft_print_line(int i, char *buf);
char	*ft_cmp_isspace(char *buf);
void	ft_print_error(char *bin, char *path, int error);

#endif
