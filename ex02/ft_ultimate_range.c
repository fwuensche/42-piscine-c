/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:43:53 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/05 20:53:19 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *super_array;
	int i;
	int size;

	size = max - min;
	if (min >= max)
	{
		*super_array = 0;
		return (0);
	}
	*super_array = (int*)malloc(sizeof(int) * size);
	i = 0;
	while (min < max)
	{
		super_array[0][i] = min;
		i++;
		min++;
	}
	return (size);
}
