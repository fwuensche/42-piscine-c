/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 20:19:19 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/16 13:31:20 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

#include <stdio.h>

int		is_valid_format(char *str, int rows, int cols)
{
	int row;
	int col;

	row = 0;
	while (*str)
	{
		col = 0;
		while (col++ < cols && *str)
			str++;
		if (*str != '\n')
		{
			write(1, "aucune\n", 7);
			return (0);
		}
		row++;
		str++;
	}
	if (row < rows)
	{
		write(1, "aucune\n", 7);
		return (0);
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
