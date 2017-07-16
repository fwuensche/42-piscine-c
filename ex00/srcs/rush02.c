/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferech <mferech@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 19:18:54 by mferech           #+#    #+#             */
/*   Updated: 2017/07/01 19:54:32 by mferech          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int x_it;
	int y_it;

	y_it = 0;
	while (y_it < y)
	{
		x_it = 0;
		while (x_it < x)
		{
			if ((y_it == 0 && x_it == 0) ||
					(y_it == 0 && x_it == x - 1))
				ft_putchar('A');
			else if ((y_it == y - 1 && x_it == 0) ||
							(y_it == y - 1 && x_it == x - 1))
				ft_putchar('C');
			else if ((x_it == 0 || x_it == x - 1) ||
							(y_it == 0 || y_it == x - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			x_it++;
		}
		ft_putchar('\n');
		y_it++;
	}
}
