/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_line_row.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpauline <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 12:13:19 by jpauline          #+#    #+#             */
/*   Updated: 2020/09/20 12:18:55 by jpauline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_col_up(int x, int **tab)
{
	int	max;
	int	i;
	int	visib;

	max = 0;
	i = 0;
	visib = 0;
	while (++i < 5)
	{
		if (tab[i][x] > max)
		{
			visib++;
			max = tab[i][x];
		}
	}
	if ((visib) && (visib != tab[0][x]))
		return (0);
	return (1);
}

int	check_col_down(int x, int **tab)
{
	int	max;
	int	i;
	int	visib;

	max = 0;
	i = 5;
	visib = 0;
	while (--i > 0)
	{
		if (tab[i][x] > max)
		{
			visib++;
			max = tab[i][x];
		}
	}
	if ((visib) && (visib != tab[5][x]))
		return (0);
	return (1);
}

int	check_line_left(int y, int **tab)
{
	int	max;
	int	i;
	int	visib;

	max = 0;
	i = 0;
	visib = 0;
	while (++i < 5)
	{
		if (tab[y][i] > max)
		{
			visib++;
			max = tab[y][i];
		}
	}
	if ((visib) && (visib != tab[y][0]))
		return (0);
	return (1);
}

int	check_line_right(int y, int **tab)
{
	int	max;
	int	i;
	int	visib;

	max = 0;
	i = 5;
	visib = 0;
	while (--i > 0)
	{
		if (tab[y][i] > max)
		{
			visib++;
			max = tab[y][i];
		}
	}
	if ((visib) && (visib != tab[y][5]))
		return (0);
	return (1);
}
