/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pebraun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 11:56:04 by pebraun           #+#    #+#             */
/*   Updated: 2017/07/17 17:26:15 by pebraun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
 * safely Returns the value at given index. 
 */
int		val(int **pt_sums, int i, int j)
{
	if (i < 0 || j < 0)
		return (0);
	return (pt_sums[i][j]);
}

/*
 * Converts char** to int** containing partial sums of obstacles in cols/rows,
 * Given rows of map.
 */

int		**count_array(char **map, char obs, int cols)
{
	int i;
	int j;
	int	**pt_sums;
	int	*line;
	int	rows;

	rows = 0;
	while (maps[rows])
		rows++
	pt_sums = malloc(sizeof(*pt_sums) * rows + 1);
	i = 0;
	while (i < rows)
	{
		line = malloc(sizeof(*line) * cols);
		j = 0;
		while (map[i][j])
		{
			line[i, j] = val(pt_sums, i, j - 1) + val(pt_sums, i - 1, j)
				- val(pt_sums, i - 1, j - 1) + (map[i][j] == obs);
			j++;
		}
		pt_sums[i] = line;
		i++;
	}
	pt_sums[i] = 0;
	return (pt_sums);
}
