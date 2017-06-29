/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 17:44:33 by fwuensch          #+#    #+#             */
/*   Updated: 2017/06/29 15:05:59 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_current_number(int n)
{
	int		a1;
	int		a2;

	a1 = (n / 10) + 48;
	a2 = (n % 10) + 48;
	ft_putchar(a1);
	ft_putchar(a2);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_current_number(i);
			ft_putchar(' ');
			ft_print_current_number(j);
			if (i != 98 || j != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
