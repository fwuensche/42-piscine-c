/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 20:19:19 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/15 23:46:32 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

#include <stdio.h>

int		is_valid_format(char *str)
{
	int rows;
	int cols;
	int col;

	rows = count_rows(str);
	cols = count_cols(str);
	while (*str)
	{
		col = 0;
		while (col < cols && *str)
		{
			str++;
			col++;
		}
		if (*str != '\n')
		{
			write(1, "aucune\n", 7);
			return (0);
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
