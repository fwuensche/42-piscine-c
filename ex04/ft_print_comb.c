/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 16:39:31 by fwuensch          #+#    #+#             */
/*   Updated: 2017/06/28 17:22:03 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = '0';
	j = '1';
	k = '2';

	while (i <= '7' && j <= '8' && k <= '9')
	{
		if (i != k && i != j && j != k)
		{
			ft_putchar(i);
			ft_putchar(j);
			ft_putchar(k);
			if (i == '7' && j == '8' && k == '9')
			{
			}
			else
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}

		if (k == '9')
		{
			k = j + 1;
			j++;
		}
		else
		{
			k++;
		}

		if (j == '9')
		{
			j = i + 1;
			i++;
		}
	}
}

int main()
{
	ft_print_comb();
	return 0;
}
