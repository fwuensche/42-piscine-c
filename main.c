/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pebraun <pebraun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 12:14:15 by pebraun           #+#    #+#             */
/*   Updated: 2017/07/17 16:21:09 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	do_solve(char *filename)
{
	// it reads a valid file into a char**
	// it tries to solve using bsq (bsq)
		// if unsolvable, it prints an ERROR
		// else, it prints the solution (ft_print_solution)
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while(i < argc)
		{
			if is_valid_input(argv[i])
				do_solve(argv[i]);
		}
	}
	// establish, size, empty, obstacle, and full characters
	// Create buffer of correct size
	// Read out line at a time, copying into char**
	// If line is wrong length, or newline at wrong location, then ERROR
	// IF COPYING A NOT ALLOWED CHAR, RETURN ERROR, exit program
	//
	// Don't forget to free any malloc'd arrays at the end.`
	return (0);
}
