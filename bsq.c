/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pebraun <pebraun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 12:34:40 by pebraun           #+#    #+#             */
/*   Updated: 2017/07/18 15:14:18 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
 * Returns the size of the largest possible square given the partial sum array
 * and its length (never 0)
 */

// need to return indices. make them int *'s?
int		bsq(int **pt_sums, int width, int *ri, int *rj)
{
	int size;
	int	i;
	int j;

	size = 0;
	i = 0;
	while (pt_sums[i])
	{
		j = 0;
		while (j < width)
		{
			while ((pt_sums[i + size]) && (j + size < width) &&
				((pt_sums[i + size][j + size] - ft_val(pt_sums, i - 1, j + size)
					- ft_val(pt_sums, i + size, j - 1) + ft_val(pt_sums, i - 1, j - 1)) < 1))
			{
				size++;
				printf("size: %i\ti: %i\tj: %i\n", size, i, j);
				*ri = i;
				*rj = j;
			}
			j++;
		}
		i++;
	}
	return (size);
}
