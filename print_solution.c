/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_solution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pebraun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 16:22:42 by pebraun           #+#    #+#             */
/*   Updated: 2017/07/17 16:42:17 by pebraun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

// add ft_putchar fxn to utils

void	print_array(char **arr)
{
	int i;
	int j;

	i = 0;
	while (arr[i])
	{
		j = 0;
		while (arr[i][j])
		{
			ft_putchar(arr[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	print_solution(char **map, int size, int i, int j)
{
	char	full;
	int		imax;
	int		jmax;

	// get full character (utils fxn)
	imax = i + size;
	jmax = j + size;
	while (i < imax)
	{
		while (j < jmax)
		{
			map[i][j] = full;
			j++;
		}
		i++;
	}
	print_array(char **map);
}
