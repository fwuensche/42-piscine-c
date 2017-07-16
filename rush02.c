/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhwangbo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 22:57:57 by mhwangbo          #+#    #+#             */
/*   Updated: 2017/07/02 18:07:44 by waliu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	sides(int ix, int x);
void	top(int ix, int x);
void	bot(int ix, int x);

void	rush02(int x, int y)
{
	int ix;
	int iy;

	if (x > 0 && y > 0)
	{
		iy = 1;
		while (iy <= y)
		{
			ix = 1;
			while (ix <= x)
			{
				if (iy == 1)
					top(ix, x);
				else if (iy == y)
					bot(ix, x);
				else
					sides(ix, x);
				ix++;
			}
			ft_putchar('\n');
			iy++;
		}
	}
}

void	sides(int ix, int x)
{
	if (ix == 1 || ix == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	top(int ix, int x)
{
	if (ix == 1 || ix == x)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	bot(int ix, int x)
{
	if (ix == 1 || ix == x)
		ft_putchar('C');
	else
		ft_putchar('B');
}
