/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 11:28:12 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/01 13:23:43 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	main(void)
{
	printf("%d %d\n", -1, ft_is_prime(-1));
	printf("%d %d\n", 0, ft_is_prime(0));
	printf("%d %d\n", 1, ft_is_prime(1));
	printf("%d %d\n", 2, ft_is_prime(2));
	printf("%d %d\n", 3, ft_is_prime(3));
	printf("%d %d\n", 4, ft_is_prime(4));
	printf("%d %d\n", 5, ft_is_prime(5));
	printf("%d %d\n", 6, ft_is_prime(6));
	printf("%d %d\n", 100109, ft_is_prime(100109));
	return (0);
}
