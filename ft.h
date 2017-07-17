/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pebraun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 13:19:40 by pebraun           #+#    #+#             */
/*   Updated: 2017/07/17 13:25:20 by pebraun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		**count_array(char **map, char obs, int size);
int		bsq(int **pt_sums, int len);
int		val(int **pt_sums, int i, int j);

#endif
