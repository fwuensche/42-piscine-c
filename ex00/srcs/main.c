/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 20:07:27 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/16 13:31:43 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		main(int ac, char **av)
{
	if (ac == 2)
		if (is_valid_format(av[1], count_rows(av[1]), count_cols(av[1])))
			find_rush(av[1]);
	return (0);
}
