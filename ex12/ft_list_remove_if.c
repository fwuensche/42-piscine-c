/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 20:59:23 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/12 23:42:08 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*last;
	t_list	*curr;
	t_list	*temp;

	last = NULL;
	curr = *begin_list;
	temp = NULL;
	while (curr)
	{
		if ((*cmp)(curr->data, data_ref) == 0)
		{
			if (curr == *begin_list)
				*begin_list = curr->next;
			else
				last->next = curr->next;
			temp = curr;
			curr = curr->next;
			free(temp);
		}
		else
		{
			last = curr;
			curr = curr->next;
		}
	}
}
