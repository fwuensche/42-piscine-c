/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 17:41:13 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/12 17:43:38 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list 	*ft_list_last(t_list *begin_list)
{
	t_list elem;

	elem = begin_list;
	while (elem->next)
		elem = elem->next;
	return (elem);
}
