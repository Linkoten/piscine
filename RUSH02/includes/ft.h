/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 17:22:17 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/27 22:13:01 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BUF_SIZE 10

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

char	*ft_u_str_cat(char *dest, char *src1, char *src2);
void	ft_find_put(char *tab, char *dict);
void	ft_putstr(char *str);
char	**create_tab(char *number, int number_len, int *nb_case);
char	**add_first_case(char *number, char **tab, int number_len, int *rang);
char	**add_in_tab(char *number, int *nb_case, int *rang, char **tab);
int		ft_strlen(char *str);
void	print_error(void);
int		is_numeric(char *str);
int		is_dict_file(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_get_line(char *str);
int		ft_strstr(char *str, char *to_find);
int		count_buff(int fd, char *buf);
char	*ft_malloc_dict(char *dict, char *dict_name);

#endif
