/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:37:55 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/07 13:54:37 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base != 1)
	{
		printf("%d\n", base);
		if ((base % 2) == 0)
			return 1+ft_collatz_conjecture(base/2);
		else
			return 1+ft_collatz_conjecture(3*base+1);
	}
	return 0;
}
