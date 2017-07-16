/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 20:19:19 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/15 21:54:00 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		is_valid_format(char *str)
{
	int rows;
	int cols;
	int j;

	rows = count_rows(str);
	cols = count_cols(str);
	while (*str)
	{
		j = 0;
		while (j < cols && *str)
		{
			if (*str == '\n')
				return (0);
			str++;
			j++;
		}
		str++;
	}
	write(1, "Valid format\n", 13);
	return (1);
}

int		count_rows(char *str)
{
	int rows;

	rows = 0;
	while (*str)
	{
		if (*str == '\n')
			rows++;
		str++;
	}
	return (rows);
}

int		count_cols(char *str)
{
	int cols;

	cols = 0;
	while (*str != '\n' && *str)
	{
		str++;
		cols++;
	}
	return (cols);
}
