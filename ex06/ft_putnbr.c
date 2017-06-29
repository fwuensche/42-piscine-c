/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 15:19:20 by fwuensch          #+#    #+#             */
/*   Updated: 2017/06/29 15:47:47 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

int		main(void)
{
	ft_putnbr(-123456);
	ft_putchar(' ');
	ft_putnbr(0);
	ft_putchar(' ');
	ft_putnbr(12);
	ft_putchar(' ');
	ft_putnbr(123);
	ft_putchar(' ');
	ft_putnbr(1234);
	return (0);
}
