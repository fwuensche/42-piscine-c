/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pebraun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 12:34:40 by pebraun           #+#    #+#             */
/*   Updated: 2017/07/17 15:16:00 by pebraun          ###   ########.fr       */
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
			// currently loops through all indices, just doesn't try to eval
			// if not possible. May affect speed.
			while (pt_sums[i + size] && j + size < width &&
					pt_sums[i + size, j + size] - val(pt_sums[i - 1, j + size])
					- val(pt_sums[i + size, j - 1] + val(pt_sums[i - 1, j - 1] < 1)))
			{
				size++;
				*ri = i;
				*rj = j;
//				if (i + size >= width)	//actually, totally unhelpful statement
//					return (size);
//				if (j + size >= width && (j = width)) // i think it will help speed...
//					break;
			}
			j++;
		}
		i++;
	}
	return (size);
}
