/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 14:00:51 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/13 14:33:42 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		main(int argc, char **argv)
{
	if (!(is_input_valid(argc)))
		return (1);
	if (ft_display_file(argv[1]) == -1)
		return (1);
	return (0);
}
