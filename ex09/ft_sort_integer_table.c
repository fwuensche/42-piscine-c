/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 11:57:58 by fwuensch          #+#    #+#             */
/*   Updated: 2017/06/30 15:06:17 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int buffer;
	int i;
	int j;

	j = 1;
	while (j <= size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				buffer = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = buffer;
			}
			i++;
		}
		j++;
	}
}

int		main(void)
{
	int table[6];
	int size;

	table[0] = 7;
	table[1] = -1;
	table[2] = 4;
	table[3] = 9;
	table[4] = 7;
	table[5] = 0;
	size = 6;
	ft_sort_integer_table(table, size);
	printf("%d\n", table[0]);
	printf("%d\n", table[1]);
	printf("%d\n", table[2]);
	printf("%d\n", table[3]);
	printf("%d\n", table[4]);
	printf("%d\n", table[5]);
	return (0);
}
