/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburova <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 07:47:35 by mburova           #+#    #+#             */
/*   Updated: 2023/11/19 20:35:44 by mburova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 1;
	while (x > 0 && y > 0 && row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (row == 1 && (col == 1 || col == x))
				ft_putchar('A');
			else if ((row == y && (col == 1 || col == x)))
				ft_putchar('C');
			else if ((row > 1 && row < y) && (col > 1 && col < x))
				ft_putchar(' ');
			else
				ft_putchar('B');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
