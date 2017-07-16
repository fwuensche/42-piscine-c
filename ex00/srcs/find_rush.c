/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_rush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 20:19:36 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/16 14:41:02 by fwuensch         ###   ########.fr       */
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
	else
		write(1, "NOPE to [rush00]\n", 17);
}
