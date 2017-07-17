/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 20:07:27 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/16 18:40:35 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

#define BUF 4048

int		main(void)
{
	char	input[BUF + 1];
	int		bytes;

	bytes = read(0, input, BUF);
	if (bytes == 0)
		return (1);
	input[bytes] = '\0';
	if (is_valid_format(input, ft_ct_rows(input), ft_ct_cols(input)))
		find_rush(input);
	return (0);
}
