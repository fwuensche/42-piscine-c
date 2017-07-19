/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 19:14:26 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/13 20:36:47 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 30

void	ft_puterror(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

void	display_stdin(void)
{
	char	buf;

	while (read(0, &buf, 1) != 0)
	{
		write(1, &buf, 1);
	}
}

int		main(int argc, char **argv)
{
	char	buffer;
	int		fd;
	int		i;

	if (argc < 2 || argv[1][0] == '-')
		display_stdin();
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd >= 0)
			while (read(fd, &buffer, 1) != 0)
				write(1, &buffer, 1);
		else
		{
			ft_puterror("ft_cat: ");
			ft_puterror(argv[i]);
			ft_puterror(": No such file or directory\n");
			return (1);
		}
		close(fd);
		i++;
	}
	return (0);
}
