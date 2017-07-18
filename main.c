/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pebraun <pebraun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 12:14:15 by pebraun           #+#    #+#             */
/*   Updated: 2017/07/18 12:26:28 by pebraun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
 * Takes entire input as string, and solves problem.
 */

void	do_solve(char *str)
{
	int		box_size;
	char	**map;
	int		**pt_sums;
	int		i;
	int		j;

	map = build_map(str);	// 1st line (info) is not kept in the array.
	pt_sums = count_array(map, ft_get_obstacle_char(str),
			ft_get_lines_width(str));
	if ((box_size = bsq(pt_sums, ft_get_lines_width(str), &i, &j)))
		print_solution(str, box_size, i, j);
	else
		write(2, "map error\n", 10);
	free_arrays(map, arr);
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while(i < argc)
		{
			if (is_valid_input(argv[i]))
			{
				printf("So, yep, it is valid.\n");
				// do_solve(argv[i]);
			}
			i++;
		}
	}
	// TODO: handle stdin if no arguments are passed
	return (0);
}
