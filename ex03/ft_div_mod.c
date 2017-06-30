/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 21:25:17 by fwuensch          #+#    #+#             */
/*   Updated: 2017/06/30 11:10:51 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 78;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", div);
	printf("%d\n", mod);
	return (0);
}
