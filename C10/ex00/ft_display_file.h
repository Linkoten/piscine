/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:04:14 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/28 17:46:00 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# define BUF_SIZE 4096

# define CRF "Cannot read file.\n"
# define FNM "File name missing.\n"
# define TMA "Too many arguments.\n"

# include <unistd.h>
# include <fcntl.h>

int		ft_strlen(char *str);
void	ft_putstr(int out, char *str);
int		ft_check_error(int ac, char *av1, int *fd);

#endif
