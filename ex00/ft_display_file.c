/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 14:09:39 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/13 14:20:25 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"
#include "includes.h"
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 4096

int	ft_display_file(char *filename)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_puterror("open() failed\n");
		return (-1);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_puterror("close() failed\n");
		return (-1);
	}
	return (0);
}
