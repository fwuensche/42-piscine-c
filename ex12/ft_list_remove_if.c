/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 20:59:23 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/12 23:39:17 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*curr;
	t_list	*next;

	next = 0;
	curr = *begin_list;
	if (!curr)
		return ;
	if (curr->next)
		next = curr->next;
	if (!(next) && (*cmp)(curr->data, data_ref) == 0)
		begin_list = 0;
	if (next && (*cmp)(next->data, data_ref) == 0)
		curr->next = 0;
	while (curr && curr->next)
	{
		next = curr->next;
		if ((*cmp)(next->data, data_ref) == 0)
		{
			curr->next = (next->next) ? next->next : 0;
			free(next);
		}
		curr = next;
	}
}
