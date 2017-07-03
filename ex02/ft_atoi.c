/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 12:38:41 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/03 12:38:43 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	while (*str != '\0' && !(*str >= '0' && *str <= '9'))
		str++;
	str--;
	sign = 1;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else
		str++;
	result = 0;
	while ((*str >= '0' && *str <= '9') && *str != '\0')
	{
		result *= 10;
		result = result + *str - '0';
		str++;
	}
	return (result * sign);
}
