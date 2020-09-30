/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 14:13:37 by pbrochar          #+#    #+#             */
/*   Updated: 2020/09/27 14:36:08 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_get_line(char *str)
{
	int		i;
	int		j;
	int		a;
	char	*line;

	i = 1;
	j = 0;
	a = 0;
	while (str[i - 1] != ':')
		i++;
	while (str[i] == 32)
		i++;
	a = i;
	while (str[i++] != '\n')
		j++;
	if (!(line = (char *)malloc((sizeof(char) * j) + 1)))
		return (0);
	i = 0;
	while (str[a] != '\n')
	{
		line[i++] = str[a];
		a++;
	}
	line[i] = '\0';
	ft_putstr(line);
	return (1);
}

int		ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (!to_find[i])
		return (0);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (!to_find[j] && (str[i + j] == 32 || str[i + j] == ':'))
			{
				ft_get_line(&str[i]);
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int		count_buff(int fd, char *buf)
{
	int ret;
	int i;

	i = 0;
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		i++;
		buf[ret] = '\0';
	}
	return (i);
}

char	*ft_malloc_dict(char *dict, char *dict_name)
{
	int		fd;
	int		ret;
	int		i;
	char	buf[BUF_SIZE + 1];
	int		c_b;

	i = 0;
	fd = open(dict_name, O_RDONLY);
	c_b = (count_buff(fd, buf) + 1) * BUF_SIZE;
	if (!(dict = (char *)malloc(sizeof(char) * c_b)))
		return (0);
	close(fd);
	fd = open(dict_name, O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		dict = ft_strcat(dict, buf);
	}
	dict[c_b] = '\0';
	close(fd);
	return (dict);
}
/*
int main(void)
{
	char *dict;
	char *line;

	dict = NULL;
	dict = ft_malloc_dict(dict, "numbers.dict");
	line = NULL;
	line = ft_strstr(dict, "1000000000000000000000000000000000000"); 
	printf("dict : \n%s\n\n", dict);
	printf("%s", line);
	free(line);
	free(dict);


}*/
