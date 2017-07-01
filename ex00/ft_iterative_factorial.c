/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 23:27:24 by fwuensch          #+#    #+#             */
/*   Updated: 2017/06/30 23:45:22 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int response;

	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	response = 1;
	while (i <= nb)
	{
		response *= i;
		i++;
	}
	return (response);
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(-1));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(3));
	return (0);
}
