/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:04:14 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/29 17:56:02 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# define BUF_SIZE 10

# define CRF(x) "ft_cat : "x": No such file or directory\n"

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <libgen.h>
# include <stdio.h>
# include <string.h>

int		ft_strlen(char *str);
void	ft_putstr(int out, char *str);
int		ft_read_file(char *arg);
void	ft_print_error(char *bin, char *path, int error);
void	ft_cat();
#endif
