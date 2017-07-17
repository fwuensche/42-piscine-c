/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_rush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 20:19:36 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/16 20:40:52 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar((char)nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_putrush(char rush, int rows, int cols, int matches)
{
	if (matches > 0)
		write(1, " || ", 4);
	write(1, "[rush-0", 7);
	write(1, &rush, 1);
	write(1, "] [", 3);
	ft_putnbr(cols);
	write(1, "] [", 3);
	ft_putnbr(rows);
	write(1, "]", 1);
}

void	find_rush(char *str)
{
	int rows;
	int cols;
	int matches;

	matches = 0;
	rows = ft_ct_rows(str);
	cols = ft_ct_cols(str);
	if (ft_same_str(str, ft_rush00(cols, rows)))
		ft_putrush('0', rows, cols, matches++);
	if (ft_same_str(str, ft_rush01(cols, rows)))
		ft_putrush('1', rows, cols, matches++);
	if (ft_same_str(str, ft_rush02(cols, rows)))
		ft_putrush('2', rows, cols, matches++);
	if (ft_same_str(str, ft_rush03(cols, rows)))
		ft_putrush('3', rows, cols, matches++);
	if (ft_same_str(str, ft_rush04(cols, rows)))
		ft_putrush('4', rows, cols, matches++);
	if (matches == 0)
		write(1, "aucune", 6);
	write(1, "\n", 1);
}
