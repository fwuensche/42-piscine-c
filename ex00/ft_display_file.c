/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 14:09:39 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/13 14:55:56 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

void	ft_display_file(char *filename)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(filename, O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

int		main(int argc, char **argv)
{
	if (!(is_input_valid(argc)))
		return (1);
	ft_display_file(argv[1]);
	return (0);
}
