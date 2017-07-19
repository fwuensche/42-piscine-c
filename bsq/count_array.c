/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pebraun <pebraun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 11:56:04 by pebraun           #+#    #+#             */
/*   Updated: 2017/07/18 16:51:12 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** safely Returns the value at given index.
*/

int		val(int **pt_sums, int i, int j)
{
	if (i < 0 || j < 0)
		return (0);
	return (pt_sums[i][j]);
}

/*
** Converts char** to int** containing partial sums of obstacles in cols/rows,
** Given rows of map.
*/

int		**count_array(char **map, char obs, int cols)
{
	int i;
	int j;
	int	**pt_sums;
	int	rows;

	rows = 0;
	while (map[rows])
		rows++;
	pt_sums = malloc(sizeof(*pt_sums) * (rows + 1));
	i = 0;
	while (i < rows)
	{
		pt_sums[i] = malloc(sizeof(int) * cols);
		j = 0;
		while (map[i][j])
		{
			pt_sums[i][j] = val(pt_sums, i, j - 1) + val(pt_sums, i - 1, j)
				- val(pt_sums, i - 1, j - 1) + (map[i][j] == obs);
			j++;
		}
		i++;
	}
	pt_sums[i] = 0;
	return (pt_sums);
}
