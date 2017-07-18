/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 15:44:53 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/18 11:17:58 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(const char *str)
{
	int n;
	int digits;
	int i;

	digits = 0;
	while (str[digits] != '\n')
		digits++;
	digits -= 3;

	i = 1;
	n = 0;
	while ('0' <= *str && *str <= '9' && i <= digits)
	{
		n = n * 10 + *str - '0';
		str++;
		i++;
	}
	return n;
}

char	ft_get_empty_char(char *str)
{
	while (*str != '\n')
		str++;
	str--;
	str--;
	str--;
	return (*str);
}

char	ft_get_obstacle_char(char *str)
{
	while (*str != '\n')
		str++;
	str--;
	str--;
	return (*str);
}

char	ft_get_full_char(char *str)
{
	while (*str != '\n')
		str++;
	str--;
	return (*str);
}

int		ft_count_map_lines(char *str)
{
	int lines;

	lines = 0;
	while (*str)
	{
		if (*str == '\n')
			lines++;
		str++;
	}
	return (lines - 1);
}

int		is_only_empty_or_obstacle(char *str, char e, char o)
{
	// skip first line
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

int		ft_lines_have_same_width(char *str)
{
	// skip first line
	while (*str != '\n')
		str++;
	str++;

	int w;
	w = 0;
	// count nb of columns
	while (*str != '\n')
	{
		w++;
		str++;
	}
	printf("Map width is: %d\n", w);

	int i;
	while (*str)
	{
		i = 0;
		while (i < w && *str)
		{
			str++;
			if (*str == '\n')
			{
				printf("Found a line break before expected.\n");
				return (0);
			}
			i++;
		}
		str++;
		if (*str != '\n' && *str)
		{
			printf("Didn't find a line break where expected. Found: %c\n", *str);
			return (0);
		}
	}
	printf("All lines have the same width.\n");
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
	{
		printf("Insufficient chars in first line.\n");
		return (0);
	}
	else
	{
		while (j < i - 3)
		{
			if (!('0' <= str[j] && str[j] <= '9'))
			{
				printf("First arg of first line (nb of lines) is not valid.\n");
				return (0);
			}
			j++;
		}
	}

	return (1);
}

void	ft_map_error(void)
{
	write(2, "map error\n", 10);
}
