/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 20:12:02 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/16 18:39:32 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

# include <unistd.h>
# include <stdlib.h>

int		is_valid_format(char *str, int rows, int cols);
void	find_rush(char *str);
int		ft_ct_rows(char *str);
int		ft_ct_cols(char *str);
int		ft_same_str(char *s1, char *s2);

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putrush(char rush, int rows, int cols, int first_match);
char	*ft_rush00(int x, int y);
char	*ft_rush01(int x, int y);
char	*ft_rush02(int x, int y);
char	*ft_rush03(int x, int y);
char	*ft_rush04(int x, int y);

#endif
