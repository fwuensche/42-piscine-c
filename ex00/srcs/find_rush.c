/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_rush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 20:19:36 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/16 16:20:34 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	find_rush(char *str)
{
	int rows;
	int cols;
	int first_match;

	first_match = 1;
	rows = count_rows(str);
	cols = count_cols(str);
	if (ft_same_str(str, ft_rush00(cols, rows)))
	{
		write(1, "[rush00]", 8);
		first_match = 0;
	}
	if (ft_same_str(str, ft_rush01(cols, rows)))
	{
		if (!(first_match))
			write(1, " || ", 4);
		write(1, "[rush01]", 8);
		first_match = 0;
	}
	if (ft_same_str(str, ft_rush02(cols, rows)))
	{
		if (!(first_match))
			write(1, " || ", 4);
		write(1, "[rush02]", 8);
		first_match = 0;
	}
	if (ft_same_str(str, ft_rush03(cols, rows)))
	{
		if (!(first_match))
			write(1, " || ", 4);
		write(1, "[rush03]", 8);
		first_match = 0;
	}
	if (ft_same_str(str, ft_rush04(cols, rows)))
	{
		if (!(first_match))
			write(1, " || ", 4);
		write(1, "[rush04]", 8);
		first_match = 0;
	}
	write(1, "\n", 1);
}
