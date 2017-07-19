/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:15:39 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/12 19:31:52 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*elem;
	t_list	*temp;

	elem = *begin_list;
	if (!elem)
		return ;
	while (elem)
	{
		temp = elem;
		free(elem);
		elem = temp->next;
	}
	*begin_list = 0;
}
