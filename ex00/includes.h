/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 14:04:05 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/13 14:25:07 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H

# include <unistd.h>

int		is_input_valid(int argc);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_puterror(char *str);

#endif
