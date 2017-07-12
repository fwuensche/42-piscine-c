/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 22:56:31 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/11 23:18:27 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct	s_opp
{
	char	operation;
	int		(*func)(int, int);
}				t_opp;

t_opp g_opstable[] =
{
	{'+', &ft_sum},
	{'-', &ft_sub},
	{'*', &ft_mul},
	{'/', &ft_div},
	{'%', &ft_mod}
};

#endif
