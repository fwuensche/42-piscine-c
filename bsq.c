/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pebraun <pebraun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 12:34:40 by pebraun           #+#    #+#             */
/*   Updated: 2017/07/18 16:50:14 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Returns the size of the largest possible square given the partial sum array
** and its length (never 0)
*/

int		is_valid_square(int **map, int i, int j, int size)
{
	int obstacles;

	obstacles = 0;
	obstacles += map[i + size][j + size];
	obstacles -= val(map, i - 1, j + size);
	obstacles -= val(map, i + size, j - 1);
	obstacles += val(map, i - 1, j - 1);
	if (obstacles > 0)
		return (0);
	else
		return (1);
}

int		bsq(int **pt_sums, int width, int *ri, int *rj)
{
	int size;
	int	i;
	int j;
	int lines;

	lines = 0;
	while (((i = 0) || 1) && (pt_sums[lines]))
		lines++;
	size = 0;
	while ((j = 0 || 1) && pt_sums[i])
	{
		while (j < width)
		{
			while ((j + size < width) && (i + size < lines)
				&& is_valid_square(pt_sums, i, j, size))
			{
				size++;
				*ri = i;
				*rj = j;
			}
			j++;
		}
		i++;
	}
	return (size);
}
