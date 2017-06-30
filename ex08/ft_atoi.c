/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 11:16:37 by fwuensch          #+#    #+#             */
/*   Updated: 2017/06/30 11:51:02 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	// skip useless characters
	while (*str != '\0' && (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'))
		str++;

	// determine if positive/negative
	sign = 1;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}

	// add digits to actual number
	result = 0;
	while ((*str >= '0' && *str <= '9') && *str != '\0')
	{
		result *= 10;
		result = result + *str - '0';
		str++;
	}
	return (result * sign);
}

int main(void)
{
	char name[] = "  -123  huas ";

	printf("%d\n", ft_atoi(name));
	return (0);
}
