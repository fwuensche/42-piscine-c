/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 20:12:02 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/16 15:54:23 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

// TODO: REMOVE
# include <stdio.h>

# include <unistd.h>
# include <stdlib.h>

#define VALID_CHAR(x) x == ' ' || x == 'A' || x == 'B' || x == 'C' \
						  || x == '/' || x == '\\' || x == 'o' || x == '|' \
							|| x == '-' || x == '*'

int		is_valid_format(char *str, int rows, int cols);
void	find_rush(char *str);
int		count_rows(char *str);
int		count_cols(char *str);
int		ft_same_str(char *s1, char *s2);

char	*ft_rush00(int x, int y);
char	*ft_rush01(int x, int y);
char	*ft_rush02(int x, int y);
// char	*ft_rush03(int x, int y);
// char	*ft_rush04(int x, int y);

#endif
