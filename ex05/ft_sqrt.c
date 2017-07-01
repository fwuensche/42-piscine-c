/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 10:56:52 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/01 11:27:03 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 0;
	while (i <= 46341 && i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(3));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(1073741824));
	printf("%d\n", ft_sqrt(1073807361));
	printf("%d\n", ft_sqrt(2147483648));
	return (0);
}
