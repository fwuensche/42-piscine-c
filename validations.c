/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 15:47:30 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/17 22:03:12 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		is_valid_input(char *filename)
{
	int		fd;
	int		i;
	char	str[BUF_SIZE + 1];
	char	e;
	char	o;

	fd = open(filename, O_RDONLY);
	while ((i = read(fd, str, BUF_SIZE)))
		str[i] = '\0';

	printf("%s\n", str);
	printf("Input says it has %d lines.\n", ft_atoi(str));
	printf("Input actually has %d lines.\n", ft_count_map_lines(str));

	if (ft_count_map_lines(str) <= 1)
		return (0);

	if (ft_count_map_lines(str) != ft_atoi(str))
		return (0);

	if (!(is_first_line_valid(str)))
		return (0);

	e = ft_get_empty_char(str);
	o = ft_get_obstacle_char(str);
	printf("Empty spaces are: %c\n", e);
	printf("Obstacles are: %c\n", o);

	if (!(is_only_empty_or_obstacle(str, e, o)))
	{
		printf("There are non-authorized chars in the map.\n");
		return (0);
	}

	if (!(ft_lines_have_same_width(str)))
		return (0);

	return (1);
}
