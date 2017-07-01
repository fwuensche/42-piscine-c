/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 01:14:23 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/01 10:32:26 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0 || nb == 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int	main(void)
{
	printf("%d\n", ft_recursive_power(-2, 3));
	printf("%d\n", ft_recursive_power(0, 2));
	printf("%d\n", ft_recursive_power(3, 0));
	printf("%d\n", ft_recursive_power(13, 1));
	printf("%d\n", ft_recursive_power(4, 2));
	return (0);
}
