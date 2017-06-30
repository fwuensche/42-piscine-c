/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 16:49:29 by fwuensch          #+#    #+#             */
/*   Updated: 2017/06/29 17:29:35 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

int		ft_is_valid(int n)
{
	return 1;
}

void	ft_print_sorted_combinations(int max)
{
	int i;

	i = 1;
	while (i <= max)
	{
		if (ft_is_valid(i) == 1)
		{
			ft_putnbr(i);
			ft_putchar(' ');
		}
		i++;
	}
}

void	ft_print_combn(int n)
{
	int max;

	max = 1;
	while (n)
	{
		max *= 10;
		n--;
	}
	ft_print_sorted_combinations(max - 1);
}

int		main(void)
{
	ft_print_combn(2);
	return (0);
}
