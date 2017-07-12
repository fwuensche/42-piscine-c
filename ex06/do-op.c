/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:44:26 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/11 20:55:37 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int		ft_calculate(int n1, char op, int n2)
{
	if (op == '+')
		return (n1 + n2);
	if (op == '-')
		return (n1 - n2);
	if (op == '/')
		return (n1 / n2);
	if (op == '*')
		return (n1 * n2);
	if (op == '%')
		return (n1 % n2);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	ft_putnbr(ft_calculate(ft_atoi(argv[1]), *argv[2], ft_atoi(argv[3])));
	ft_putchar('\n');
	return (0);
}
