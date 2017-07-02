/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 19:15:00 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/01 19:19:11 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if ((x < 2 && y < 2) || (x == w && y == h && y > 1 && x > 1))
				ft_putchar('/');
			else if (x > 1 && x < w && y > 1 && y < h)
				ft_putchar(' ');
			else if ((x == 1 && y == h) || (x == w && y == 1))
				ft_putchar('\\');
			else
				ft_putchar('*');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
