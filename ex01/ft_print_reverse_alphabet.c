/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 16:14:32 by fwuensch          #+#    #+#             */
/*   Updated: 2017/06/28 16:19:27 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(i)
{
	write(1, &i, 1);
	return;
}

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 'z';
	while ( i >= 'a' )
	{
		ft_putchar(i);
		i--;
	}
}

int main()
{
	ft_print_reverse_alphabet();
}

