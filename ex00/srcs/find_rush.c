/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_rush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 20:19:36 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/16 15:38:05 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	find_rush(char *str)
{
	int rows;
	int cols;

	rows = count_rows(str);
	cols = count_cols(str);

	if (ft_same_str(str, ft_rush00(cols, rows)))
		write(1, "YEAH to [rush00]\n", 17);
	if (ft_same_str(str, ft_rush01(cols, rows)))
		write(1, "YEAH to [rush01]\n", 17);
	// if (ft_same_str(str, ft_rush02(cols, rows)))
	// 	write(1, "YEAH to [rush02]\n", 17);
	// if (ft_same_str(str, ft_rush03(cols, rows)))
	// 	write(1, "YEAH to [rush03]\n", 17);
	// if (ft_same_str(str, ft_rush04(cols, rows)))
	// 	write(1, "YEAH to [rush04]\n", 17);
}
