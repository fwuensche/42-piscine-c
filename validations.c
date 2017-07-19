/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 15:47:30 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/18 16:02:13 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		is_valid_input(char *str)
{
	char	e;
	char	o;

	if (ft_count_map_lines(str) < 1)
		return (0);
	if (ft_count_map_lines(str) != ft_get_number_of_lines(str))
		return (0);
	if (!(is_first_line_valid(str)))
		return (0);
	e = ft_get_empty_char(str);
	o = ft_get_obstacle_char(str);
	if (!(is_only_empty_or_obstacle(str, e, o)))
		return (0);
	if (!(ft_lines_have_same_width(str)))
	{
		return (0);
	}
	return (1);
}

int		is_first_line_valid(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\n')
		i++;
	if (i < 4)
		return (0);
	else
	{
		while (j < i - 3)
		{
			if (!('0' <= str[j] && str[j] <= '9'))
				return (0);
			j++;
		}
	}
	return (1);
}

int		is_only_empty_or_obstacle(char *str, char e, char o)
{
	while (*str != '\n')
		str++;
	while (*str)
	{
		if (*str != e && *str != o && *str != '\n')
			return (0);
		str++;
	}
	return (1);
}
