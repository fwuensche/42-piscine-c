/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pebraun <pebraun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 12:34:40 by pebraun           #+#    #+#             */
/*   Updated: 2017/07/18 15:50:17 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
 * Returns the size of the largest possible square given the partial sum array
 * and its length (never 0)
 */

int		is_valid_square(int **map, int i, int j, int size)
{
	int obstacles;

	obstacles = 0;
	obstacles += map[i + size][j + size];
	obstacles -= ft_val(map, i - 1, j + size);
	obstacles -= ft_val(map, i + size, j - 1);
	obstacles += ft_val(map, i - 1, j - 1);

	if (obstacles > 0)
		return (0);
	else
		return (1);
}

// need to return indices. make them int *'s?
int		bsq(int **pt_sums, int width, int *ri, int *rj)
{
	int size;
	int	i;
	int j;
	int lines;

	lines = 0;
	while (pt_sums[lines])
		lines++;

	size = 0;
	i = 0;
	while (pt_sums[i])
	{
		j = 0;
		while (j < width)
		{
			while ((j + size < width) && (i + size < lines) && is_valid_square(pt_sums, i, j, size))
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
