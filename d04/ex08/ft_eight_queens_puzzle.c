/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 23:39:40 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/01 23:40:16 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_recursive_function(int i)
{
	if (i == 1)
		ft_recursive_function(i - 1);
}

int		ft_eight_queens_puzzle(void)
{
	ft_sample_recursive_function(1);
	return (92);
}

