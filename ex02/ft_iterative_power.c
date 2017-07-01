/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 00:48:57 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/01 13:23:19 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int response;

	if (power < 0 || nb == 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	response = 1;
	while (power > 0)
	{
		response = response * nb;
		power--;
	}
	return (response);
}

int	main(void)
{
	printf("%d\n", ft_iterative_power(-2, 3));
	printf("%d\n", ft_iterative_power(0, 2));
	printf("%d\n", ft_iterative_power(3, 0));
	printf("%d\n", ft_iterative_power(13, 1));
	printf("%d\n", ft_iterative_power(4, 2));
	return (0);
}
