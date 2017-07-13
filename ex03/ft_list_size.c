/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 17:33:43 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/12 17:38:56 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_list_size(t_list *begin_list)
{
	int size;

	size = 0;
	while(begin_list)
	{
		begin_list = begin_list->next;
		size++;
	}
	return (size);
}
