/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:10:39 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/07 13:19:36 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sorted(int left, int mid, int right)
{
	if (left <= mid && mid <= right)
		return (1);
	else
		return (0);
}

int		ft_button(int i, int j, int k)
{
	if (ft_is_sorted(i, j, k))
		return (j);
	if (ft_is_sorted(k, j, i))
		return (j);
	if (ft_is_sorted(j, i, k))
		return (i);
	if (ft_is_sorted(k, i, j))
		return (i);
	if (ft_is_sorted(i, k, j))
		return (k);
	if (ft_is_sorted(j, k, i))
		return (k);
	return (0);
}
