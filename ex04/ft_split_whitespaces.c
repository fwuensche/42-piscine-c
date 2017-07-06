/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 12:58:26 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/06 13:40:22 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_whitespaces(char *str)
{
	// copy the string to the i-th element of the array until it matches space/tab/linebreak
	// increment i
	// break while when end of string is found
	// add a 0 to the last element of the array
	// return arr[i][j]

	int str_it;
	int i;
	int j;
	i = 0;
	j = 0;

	char **arr;
	while (str[str_it] != '\0')
	{
		if (str[str_it] == ' ' || str[str_it] == '\n' || str[str_it] == '\t')
		{
			arr[i][j] = '\0';
			if (j != 0)
				i++;
			str_it++;
			j = 0;
		}
		else
		{
			arr[i][j] = str[str_it];
			str_it++;
			j++;
		}
		str_it++;
	}
	arr[i][j] = '0';
	arr[i][j + 1] = '\0';
	return (arr);
}
