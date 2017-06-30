/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 21:25:17 by fwuensch          #+#    #+#             */
/*   Updated: 2017/06/29 21:41:37 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int a = 78;
	int b = 10;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", div);
	printf("%d\n", mod);
	return (0);
}
