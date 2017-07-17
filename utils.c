/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 15:44:53 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/17 16:18:58 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(const char *str)
{
	int n;
	int sign;

	while (*str)
	{
		if (*str == ' ')
			str++;
		else
			break;
	}
	sign = 1;
	if (*str == '-') {
		sign = -1;
		str++;
	}
	n = 0;
	while (*str)
	{
		n = n * 10 + *str - '0';
		str++;
	}
	n *= sign;
	return n;
}

char	ft_get_empty_char(char *first_line)
{
}

char	ft_get_obstacle_char(char *first_line)
{
}

char	ft_get_full_char(char *first_line)
{
}

char	ft_get_number_of_lines(char *first_line)
{
}
