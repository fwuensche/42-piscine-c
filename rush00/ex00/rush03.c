/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 18:19:08 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/01 19:24:33 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int w;
	int h;

	w = x;
	h = y;
	y = 1;
	while (y <= h)
	{
		x = 1;
		while (x <= w)
		{
			if ((x == 1 && y == 1) || (x == 1 && y == h))
				ft_putchar('A');
			else if (x > 1 && x < w && y > 1 && y < h)
				ft_putchar(' ');
			else if ((x == w && y == 1) || (x == w && y == h))
				ft_putchar('C');
			else
				ft_putchar('B');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
