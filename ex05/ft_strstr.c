/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 17:08:00 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/03 17:51:12 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char  *ft_strstr(char *str, char *to_find)
{
	char *result;
	char *query;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		result = str;
		query = to_find;
		while (*str != '\0' && *query != '\0' && *str == *query)
		{
			str++;
			query++;
		}
		if (*(query - 1) == '\0')
			return (result);
		str = result + 1;
	}
	return (0);
}
