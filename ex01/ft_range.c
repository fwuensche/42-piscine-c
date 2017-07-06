/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 20:16:25 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/05 20:43:12 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *super_array;
	int i;

	if (min >= max)
		return (0);
	super_array = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		super_array[i] = min;
		i++;
		min++;
	}
	return (super_array);
}
