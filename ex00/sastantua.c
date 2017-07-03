/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 21:58:20 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/02 20:44:38 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(c)
{
	write(1, &c, 1);
}

int		ft_last_line_number(size)
{
	int skip;

	skip = ((size - 1) % 2 + (size - 1) / 2 + 1);
	if (size == 1)
		return (0);
	else
		return (size + 2 + skip + ft_last_line_number(size - 1));
}

void	ft_print_line(int n, int last_line_number)
{
	int offset;
	int stars;

	offset = (3 + last_line_number * 2) / 2 - n - 1;
	while (offset)
	{
		ft_putchar(' ');
		offset--;
	}
	ft_putchar('/');
	stars = 1 + n * 2;
	while (stars)
	{
		ft_putchar('*');
		stars--;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	sastantua(int size)
{
	int i;
	int base_size;

	base_size = 2 + 1 + (size - 1) * 2;
	if (size > 0)
	{
		i = 0;
		while (i < ft_last_line_number(size))
		{
			ft_print_line(i, base_size);
			i++;
		}
	}
}

int		main(void)
{
	sastantua(10);
	return (0);
}
