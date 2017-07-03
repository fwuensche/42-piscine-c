/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 21:58:20 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/02 21:03:49 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(c)
{
	write(1, &c, 1);
}

int		ft_lines_to_skip(stage)
{
	return (((stage - 1) % 2 + (stage - 1) / 2 + 1));
}

int		ft_last_line_number(size)
{
	if (size == 1)
		return (3);
	else
		return (size + 2 + ft_lines_to_skip(size) + ft_last_line_number(size - 1));
}

void	ft_print_line(int n, int last_line_number)
{
	int offset;
	int stars;

	offset = (3 + last_line_number * 2) / 2 - n - 1;
	while (offset--)
		ft_putchar(' ');
	ft_putchar('/');
	stars = 1 + n * 2;
	while (stars--)
		ft_putchar('*');
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
		while (i <= ft_last_line_number(size))
		{
			ft_print_line(i, ft_last_line_number(size));
			i++;
		}
	}
}

int		main(void)
{
	sastantua(2);
	return (0);
}
