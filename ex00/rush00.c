/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferech <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 18:30:54 by mferech           #+#    #+#             */
/*   Updated: 2017/07/01 18:30:59 by mferech          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

void rush(x, y)
{
  int x_it;
  int y_it;

  y_it = 0;
  while (y_it < y)
  {
    x_it = 0;
    while (x_it < x)
    {
      if ((x_it == 0 && y_it == 0) ||
          (x_it == 0 && y_it == y -1 ) ||
          (x_it == x - 1 && y_it == 0) ||
          (x_it == x - 1 && y_it == y - 1))
      {
        ft_putchar('o');
      }
      else if (x_it == 0 || x_it == x -1)
      {
        ft_putchar('|');
      }
      else if (y_it == 0 || y_it == x -1)
      {
        ft_putchar('-');
      }
      else
      {
        ft_putchar(' ');
      }
      x_it++;
    }
    ft_putchar('\n');
    y_it++;
  }
}
