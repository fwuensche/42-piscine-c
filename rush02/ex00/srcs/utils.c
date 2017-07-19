/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 20:19:19 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/16 18:18:38 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

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
	return (1);
}

int		ft_ct_rows(char *str)
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

int		ft_ct_cols(char *str)
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

int		ft_same_str(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	if (*s1 || *s2)
		return (0);
	return (1);
}
