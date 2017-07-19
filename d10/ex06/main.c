/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:44:26 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/11 23:26:00 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include "structs.h"

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
	int i;

	i = 0;
	if (op == '+' || op == '-' || op == '/' || op == '*' || op == '%')
	{
		while (i < 5)
		{
			if (g_opstable[i].operation == op)
				return (g_opstable[i].func(n1, n2));
			i++;
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		n1;
	int		n2;
	char	*op;

	if (argc != 4)
		return (0);
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	op = argv[2];
	if (n2 == 0 && *op == '/')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (n2 == 0 && *op == '%')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ft_putnbr(ft_calculate(n1, *argv[2], n2));
	ft_putchar('\n');
	return (0);
}
